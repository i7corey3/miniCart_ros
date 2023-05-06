import rclpy
from rclpy.node import Node
from sabertooth_msg.msg import SpeedVals
from sabertooth_msg.msg import MotorCommand
from pysabertooth import Sabertooth
import serial
import time


class SabertoothDriver(Node):

    def __init__(self):
        super().__init__('motor_driver')

        # setup parameters
        self.declare_parameter('address', value=[128,129])
        self.address = self.get_parameter('address').value

        self.declare_parameter('serial_port', value="/dev/ttyUSB0")
        self.serial_port = self.get_parameter('serial_port').value

        self.declare_parameter("baud_rate", value=9600)
        self.baud_rate = self.get_parameter('baud_rate').value

        # Setup topics & services
        time.sleep(1)
        self.subscription = self.create_subscription(
            MotorCommand,
            'motor_command',
            self.motor_command_callback,
            10
        )

        self.speed_pub = self.create_publisher(SpeedVals, 'motor_vels', 10)

        # Member Varialbes
        self.last_read_time = time.time()
        self.frontLeft_speed = 0
        self.frontRight_speed = 0
        self.backLeft_speed = 0
        self.backRight_speed = 0

        # Open Serial Comms

        print(f"Connecting to port {self.serial_port} at {self.baud_rate}.")
        self.saber = Sabertooth(self.serial_port, baudrate=self.baud_rate, address=self.address, timeout=0.1)
        print(f"Connected to {self.saber}")


    # Raw Sabertooth Commands

    def Forward(self, drive, steer):
        self.saber.drive(1, drive, 0)
        self.saber.drive(2, -drive, 1)
        self.saber.drive(2, steer, 0)
        self.saber.drive(1, -steer, 1)
        self.frontLeft_speed = drive
        self.frontRight_speed = -drive
        self.backLeft_speed = drive
        self.backRight_speed = -drive

        
    def Backward(self, drive, steer):
        self.saber.drive(1, -drive, 0)
        self.saber.drive(2, drive, 1)
        self.saber.drive(2, -steer, 0)
        self.saber.drive(1, steer, 1)
        self.frontLeft_speed = -drive
        self.frontRight_speed = drive
        self.backLeft_speed = -drive
        self.backRight_speed = drive


    def LateralLeft(self, drive):
        self.saber.drive(1, drive, 0)
        self.saber.drive(2, drive, 1)
        self.saber.drive(2, drive, 0)
        self.saber.drive(1, drive, 1)
        self.frontLeft_speed = drive
        self.frontRight_speed = drive
        self.backLeft_speed = drive
        self.backRight_speed = drive


    def LateralRight(self, drive):
        self.saber.drive(1, drive, 0)
        self.saber.drive(2, drive, 1)
        self.saber.drive(2, drive, 0)
        self.saber.drive(1, drive, 1)
        self.frontLeft_speed = drive
        self.frontRight_speed = drive
        self.backLeft_speed = drive
        self.backRight_speed = drive


    def TurnRight(self, drive):
        self.saber.drive(1, drive, 0)
        self.saber.drive(2, -drive, 1)
        self.saber.drive(2, -drive, 0)
        self.saber.drive(1, drive, 1)
        self.frontLeft_speed = drive
        self.frontRight_speed = -drive
        self.backLeft_speed = -drive
        self.backRight_speed = drive


    def TurnLeft(self, drive):
        self.saber.drive(1, -drive, 0)
        self.saber.drive(2, drive, 1)
        self.saber.drive(2, drive, 0)
        self.saber.drive(1, -drive, 1)
        self.frontLeft_speed = -drive
        self.frontRight_speed = drive
        self.backLeft_speed = drive
        self.backRight_speed = -drive


    def Stop(self):
        self.saber.stop()

    # Callback Function

    def motor_command_callback(self, motor_command):
        if motor_command.direction == 0:
            self.Forward(motor_command.drive_speed, motor_command.steer_speed)
        elif motor_command.direction == 1:
            self.Backward(motor_command.drive_speed, motor_command.steer_speed)
        elif motor_command.direction == 2:
            self.TurnLeft(motor_command.drive_speed)
        elif motor_command.direction == 3:
            self.TurnRight(motor_command.drive_speed)
        else:
            self.Stop()

    def checkSpeed(self):
        new_time = time.time()
        time_diff = new_time - self.last_read_time
        self.last_read_time = new_time
        spd_msg = SpeedVals()
        spd_msg.front_left_speed = self.frontLeft_speed
        spd_msg.front_right_speed = self.frontRight_speed
        spd_msg.back_left_speed = self.backLeft_speed
        spd_msg.back_right_speed = self.backRight_speed
        self.speed_pub.publish(spd_msg)
        print(spd_msg)
    
    def closeConnection(self):
        self.saber.close()


def main(args=None):
    rclpy.init(args=args)

    motor_driver = SabertoothDriver()

    rate = motor_driver.create_rate(2)
    while rclpy.ok():
        rclpy.spin_once(motor_driver)
        motor_driver.checkSpeed()

    motor_driver.closeConnection()
    motor_driver.destroy_node()
    rclpy.shutdown()






