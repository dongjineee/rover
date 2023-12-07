# rover vr 01
1. rover simualation 초기 단계
2. rover urdf, gazebo run 포함



# rover simualtion gazebo 
    $ roslaunch rover bringup.launch
    $ roslaunch rover controller.launch
    $ rosrun teleop_twist_keyboard teleop_twist_keyboard.py cmd_vel:=/base_controller/cmd_vel

![obstacle_front_wheel](https://github.com/dongjineee/rover/assets/150753899/e7e27682-6da2-4e68-a7bf-0bbe29d424c1)

![obstacle_middle_wheel](https://github.com/dongjineee/rover/assets/150753899/5bd573f1-2408-4dc1-bdda-831dbc7f8009)

![obstacle_rear_wheel](https://github.com/dongjineee/rover/assets/150753899/49c7ff94-2350-4871-8276-b43929eb93c5)

    
# rover simualtion rviz 
    $ roslaunch rover upload.launch
    $ rosrun rviz rviz



