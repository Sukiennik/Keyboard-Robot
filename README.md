# Keyboard Robot

##### Simple project of robot which can write on keyboard. 
It is using servos for motion. General idea is that you connect with Arduino board with Serial port and send some keys from text file which Arduino interprets and sets servo positions to right directions. 

##### I am using:
* [MeArm robot](https://shop.mime.co.uk/collections/mearm)
* [Inverse Kinematics Library](https://github.com/yorkhackspace/meArm)

# Presentation
[![meArm moving with Inverse Kinematics](http://img.youtube.com/vi/mzdzAmYCC3Y/0.jpg)](https://www.youtube.com/watch?v=mzdzAmYCC3Y)

# Usage

Upload `main.ino` sketch on your Arduino board. Run `file_sender.py`. You have to callibrate on your own. 
