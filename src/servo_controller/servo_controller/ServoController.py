import RPi.GPIO as GPIO
import rclpy
from rclpy.action import ActionServer
from rclpy.node import Node
from robocar_interfaces.action import Servo

def map( value, fromLow, fromHigh, toLow, toHigh): # map a value from one range to another range
 return (toHigh-toLow)*(value-fromLow) / (fromHigh-fromLow) + toLow

class ServoController(Node):

    def __init__(self, servo_pin: int, offset: int):
        super().__init__('servo_controller')
        self.servo_frequency = 50
        self.servo_pin = servo_pin
        self.offset = offset
        self.min_duty = 2.5 + self.offset
        self.max_duty = 12.5 + self.offset
        self.servo = None
        self.angle = 90
        self.duty_cycle = 0
        self._action_server = ActionServer(
            self,
            Servo,
            'servo',
            self.execute_callback
        )

    def __set_duty_cycle(self):
        duty_cycle = map(self.angle, 0, 180, self.min_duty, self.max_duty)
        self.get_logger().debug(f"Modified Duty Cycle | Previous: {self.duty_cycle} | New: {duty_cycle}")
        self.servo.ChangeDutyCycle(duty_cycle)
        self.duty_cycle = duty_cycle
        return self

    def __set_angle(self, angle: int):
        if not angle > 0 and angle < 180:
            self.get_logger().error(f"Invalid Angle Set | Must be between 0 and 180 | Got: {angle}")
            return
        self.angle = angle
        return self
    def setup(self):
        GPIO.setmode(GPIO.BOARD)
        GPIO.setup(self.servo_pin, GPIO.OUT)
        GPIO.output(self.servo_pin, GPIO.LOW)
        self.servo = GPIO.PWM(self.servo_pin, self.servo_frequency)
        self.servo.start(0)
        return self
    
    def execute_callback(self, goal_handle):
        self.get_logger().info("Executing Goal!")
        current_angle = self.angle
        self.run(goal_handle.request.angle)
        goal_handle.succeed()
        result = Servo.Result()
        result.angle_delta = self.angle - current_angle
        result.duty_cycle = self.duty_cycle
        return result

    def run(self, angle: int):
        self.__set_angle(angle)
        self.__set_duty_cycle()
        return self

    def stop(self):
        self.get_logger().info("Stopping Servo Controller")
        self.servo.stop()
        GPIO.cleanup()
        self.servo = None
        return self

def main(args=None):
    rclpy.init(args=args)
    servo_pin=12
    offset = 0.5
    servo_controller = ServoController(servo_pin, offset)
    servo_controller.setup()
    rclpy.spin(servo_controller)
    servo_controller.stop()

if __name__ == '__main__':
    main()