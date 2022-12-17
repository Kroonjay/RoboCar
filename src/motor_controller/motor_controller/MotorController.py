import RPi.GPIO as GPIO
import rclpy
from rclpy.action import ActionServer
from rclpy.node import Node
from robocar_interfaces.action import Motor

class MotorController(Node):

    def __init__(self, motor_one_pin: int, motor_two_pin: int, motor_enable_pin: int):
        super().__init__('motor_controller')
        self.motor_one_pin = motor_one_pin
        self.motor_two_pin = motor_two_pin
        self.motor_enable_pin = motor_enable_pin
        self.pwm_freqency = 1000
        self.duty_cycle = 0
        self.reverse = False
        self.__motor = None
        self._action_server = ActionServer(
            self,
            Motor,
            'motor',
            self.execute_callback
        )
    
    def execute_callback(self, goal_handle):
        self.get_logger().info("Executing Goal!")
        current_duty_cycle = self.duty_cycle
        currently_reversed = self.reverse
        self.run(goal_handle.request.duty_cycle, goal_handle.request.reverse)
        goal_handle.succeed()
        result = Motor.Result()
        if self.reverse != currently_reversed:
            result.direction_changed = True
        else:
            result.direction_changed = False
        result.duty_cycle_change = self.duty_cycle - current_duty_cycle
        
        return result

    def setup(self):
        GPIO.setmode(GPIO.BOARD)
        GPIO.setup(self.motor_one_pin, GPIO.OUT)
        GPIO.setup(self.motor_two_pin, GPIO.OUT)
        GPIO.setup(self.motor_enable_pin, GPIO.OUT)
        self.__motor = GPIO.PWM(self.motor_enable_pin, self.pwm_freqency)
        self.__motor.start(self.duty_cycle)
        self.__set_direction(self.reverse)
        return self

    def __set_duty_cycle(self, duty_cycle: int):
        self.get_logger().info(
            f"Modified Duty Cycle | Previous: {self.duty_cycle} | New: {duty_cycle}")
        self.duty_cycle = duty_cycle
        self.__motor.start(self.duty_cycle)
        return self

    def __set_direction(self, reverse: bool = None) -> None:
        self.get_logger().info(
            f"Set Direction | Changing Direction | Previous: {'reverse' if self.reverse else 'forward'} | New: {'reverse' if reverse else 'forward'}")

        if reverse:
            GPIO.output(self.motor_one_pin, GPIO.HIGH)
            GPIO.output(self.motor_two_pin, GPIO.LOW)
            self.reverse = False
        else:
            GPIO.output(self.motor_one_pin, GPIO.LOW)
            GPIO.output(self.motor_two_pin, GPIO.HIGH)
            self.reverse = True
        return self

    def run(self, duty_cycle: int, reverse: bool = None) -> None:
        self.get_logger().debug(
            f"Run Motor | Direction: {'Reverse' if reverse else 'Forward'} | Duty Cycle: {duty_cycle}")
        self.get_logger().debug(
            f"Previous  | Direction: {'Reverse' if self.reverse else 'Forward'} | Duty Cycle: {self.duty_cycle}")
        self.__set_direction(reverse)
        self.__set_duty_cycle(duty_cycle)
        return

    def stop(self):
        self.get_logger().info("Stopping Motor | Cleaning up GPIO Devices | Run setup again to restart")
        self.__motor.stop()
        GPIO.cleanup()
        self.__motor = None
        return self

def main(args=None):
    rclpy.init(args=args)
    motor_one_pin = 15
    motor_two_pin = 13
    motor_enable_pin = 11
    motor_controller = MotorController(motor_one_pin=motor_one_pin, motor_two_pin=motor_two_pin,motor_enable_pin=motor_enable_pin)
    motor_controller.setup()
    rclpy.spin(motor_controller)
    motor_controller.stop()
    motor_controller.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()