import rclpy
from rclpy.node import Node

from robocar_interfaces.msg import IMU
from . import MPU6050

TOPIC_NAME = "sensors/imu"
QUEUE_SIZE = 10

POLL_INTERVAL_PARAM_NAME = "imu_poll_seconds"

ACCEL_RATE_CONSTANT = 16384.0
GYRO_RATE_CONSTANT = 131.0

def calculate_accel_rate(value):
    return value / ACCEL_RATE_CONSTANT

def calculate_gyro_rate(value):
    return value / GYRO_RATE_CONSTANT

def get_message(accel, gyro):
    if accel is None or gyro is None:
        return None
    msg = IMU()
    msg.accel = accel
    msg.gyro = gyro
    msg.a_x = calculate_accel_rate(accel[0])
    msg.a_y = calculate_accel_rate(accel[1])
    msg.a_z = calculate_accel_rate(accel[2])
    msg.g_x = calculate_gyro_rate(gyro[0])
    msg.g_y = calculate_gyro_rate(gyro[1])
    msg.g_z = calculate_gyro_rate(gyro[2])
    return msg

class IMUController(Node):
    def __init__(self):
        super().__init__('imu_controller')
        self._publisher = self.create_publisher(IMU, TOPIC_NAME, QUEUE_SIZE)
        self.declare_parameter(POLL_INTERVAL_PARAM_NAME, 0.5)
        self.timer = self.create_timer(self.get_parameter(POLL_INTERVAL_PARAM_NAME).get_parameter_value().double_value, self.poll_imu)
        self.mpu = MPU6050.MPU6050()
    
    def poll_imu(self):
        accel = self.mpu.get_acceleration()
        gyro = self.mpu.get_rotation()
        msg = get_message(accel, gyro)
        if not msg:
            self.get_logger().error('IMU Controller | Invalid Message Data | Accel: %s | Gyro: %s' % (accel,gyro))
            return
        self._publisher.publish(msg)
        self.get_logger().info('Publishing IMU Data')


def main(args=None):
    rclpy.init(args=args)
    imu_controller = IMUController()
    rclpy.spin(imu_controller)
    imu_controller.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
