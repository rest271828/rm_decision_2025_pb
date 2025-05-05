#!/bin/bash
export DISPLAY=:0

cmds=(  
	"source ../install/setup.bash; ros2 launch livox_ros_driver2 msg_MID360_launch.py"
	"ros2 topic echo livox/imu"
	)

for cmd in "${cmds[@]}";
do
	echo Current CMD : "$cmd"
	gnome-terminal -- bash -ic "$cmd;"
	sleep 3.0
done

while [ 1 ]
do 
echo "- Commands Running -"
done
