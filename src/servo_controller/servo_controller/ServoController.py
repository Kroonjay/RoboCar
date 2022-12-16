import RPi.GPIO as GPIO
import rclpy
from rclpy.action import ActionServer
from rclpy.node import Node
from robocar_interfaces.action import Servo

SERVO_PIN_PARAM_NAME = "servo_pin"
SERVO_OFFSET_PARAM_NAME = "servo_offset"
SERVO_FREQUENCY_PARAM_NAME = "servo_frequency"

SERVO_MIN_ANGLE = 0
SERVO_MAX_ANGLE = 180
SERVO_DEFAULT_ANGLE = 90


def map( value, fromLow, fromHigh, toLow, toHigh): # map a value from one range to another range
 return (toHigh-toLow)*(value-fromLow) / (fromHigh-fromLow) + toLow

def get_min_duty(offset):
    return 2.5 + offset

def get_max_duty(offset):
    return 12.5 + offset

class ServoController(Node):

    def __init__(self):
        super().__init__('servo_controller')
        self.declare_parameter(SERVO_PIN_PARAM_NAME, 12)
        self.declare_parameter(SERVO_FREQUENCY_PARAM_NAME, 50)
        self.declare_parameter(SERVO_OFFSET_PARAM_NAME, 0.5)
        self.servo = None
        self.angle = SERVO_DEFAULT_ANGLE
        self.duty_cycle = 0
        self._action_server = ActionServer(
            self,
            Servo,
            'servo',
            self.execute_callback
        )

    def __set_duty_cycle(self):
        offset = self.get_parameter(SERVO_OFFSET_PARAM_NAME).get_parameter_value()
        duty_cycle = map(self.angle, SERVO_MIN_ANGLE, SERVO_MAX_ANGLE, get_min_duty(offset), get_max_duty(offset))
        self.get_logger().debug(f"Modified Duty Cycle | Previous: {self.duty_cycle} | New: {duty_cycle}")
        self.servo.ChangeDutyCycle(duty_cycle)
        self.duty_cycle = duty_cycle
        return self

    def __set_angle(self, angle: int):
        if not angle > SERVO_MIN_ANGLE and angle < SERVO_MAX_ANGLE:
            self.get_logger().error(f"Invalid Angle Set | Must be between {SERVO_MIN_ANGLE} and {SERVO_MAX_ANGLE} | Got: {angle}")
            return
        self.angle = angle
        return self

    def setup(self):
        GPIO.setmode(GPIO.BOARD)
        servo_pin = self.get_parameter(SERVO_PIN_PARAM_NAME).get_parameter_value()
        GPIO.setup(servo_pin, GPIO.OUT)
        GPIO.output(servo_pin, GPIO.LOW)
        self.servo = GPIO.PWM(servo_pin, self.get_parameter(SERVO_FREQUENCY_PARAM_NAME).get_parameter_value())
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