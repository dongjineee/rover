# rover vr 01
1. rover simualation 초기 단계
2. rover urdf, gazebo run 포함

https://github.com/dongjineee/rover/assets/150753899/5bd573f1-2408-4dc1-bdda-831dbc7f8009

# rover simualtion gazebo 
    $ roslaunch rover bringup.launch
    $ roslaunch rover controller.launch
    $ rosrun teleop_twist_keyboard teleop_twist_keyboard.py cmd_vel:=/base_controller/cmd_vel
<img src="https://github.com/dongjineee/rover/assets/150753899/e7e27682-6da2-4e68-a7bf-0bbe29d424c1" width="384" height="216"/>


앞 바퀴 장애물 넘기 


<img src="https://github.com/dongjineee/rover/assets/150753899/5bd573f1-2408-4dc1-bdda-831dbc7f8009" width="384" height="216"/>


중간 바퀴 장애물 넘기


<img src="https://github.com/dongjineee/rover/assets/150753899/49c7ff94-2350-4871-8276-b43929eb93c5" width="384" height="216"/>


뒷 바퀴 장애물 넘기

    
# rover simualtion rviz 
    $ roslaunch rover upload.launch
    $ rosrun rviz rviz



