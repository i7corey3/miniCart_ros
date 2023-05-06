import rclpy
from rclpy.node import Node
import time

from sabertooth_msg.msg import SpeedVals
from sabertooth_msg.msg import MotorCommand

class Controls(Node):

    def __init__(self):
        super().__init__('motor_controls')
        print("Setting Up")

        self.publisher = self.create_publisher(MotorCommand, 'motor_command', 10)

        self.speed_sub = self.create_subscription(
            SpeedVals,
            'motor_vels',
            self.motor_vel_callback,
            10
        )
        time.sleep(1)
        
    
    def send_command(self, command):
        msg = MotorCommand()
        try:
            msg.direction = int(command.split(" ")[0])
            msg.drive_speed = int(command.split(" ")[1])
            msg.steer_speed = int(command.split(" ")[2])
            self.publisher.publish(msg)
        except:
            msg.direction = 0
            msg.drive_speed = 0
            msg.steer_speed = 0
            self.publisher.publish(msg)
    
    def motor_vel_callback(self, motor_vels):
        pass
        # print(motor_vels.front_left_speed)
        # print(motor_vels.front_right_speed)
        # print(motor_vels.back_left_speed)
        # print(motor_vels.back_right_speed)

def main(args=None):

    rclpy.init(args=args)

    control = Controls()
    rate = control.create_rate(20)
    while rclpy.ok():
        rclpy.spin_once(control)
        command = input("Enter Command")
        control.send_command(command)

    control.destroy_node()
    rclpy.shutdown()

        
