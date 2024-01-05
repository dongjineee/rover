# rover vr 01
1. rover simualation 초기 단계
2. rover urdf, gazebo run 포함
3. rover moon 환경 포함



# rover simualtion gazebo 
    $ roslaunch rover bringup.launch
    $ roslaunch rover controller.launch
    $ rosrun teleop_twist_keyboard teleop_twist_keyboard.py cmd_vel:=/base_controller/cmd_vel
<p align = "center">
<img src="https://github.com/dongjineee/rover/assets/150753899/e7e27682-6da2-4e68-a7bf-0bbe29d424c1" width="384" height="216"/>
</p>
<p align = "center">

</p>
<p align = "center">
<img src="https://github.com/dongjineee/rover/assets/150753899/5bd573f1-2408-4dc1-bdda-831dbc7f8009" width="384" height="216"/>
</p>
<p align = "center">

</p>
<p align = "center">
<img src="https://github.com/dongjineee/rover/assets/150753899/49c7ff94-2350-4871-8276-b43929eb93c5" width="384" height="216"/>
</p>
<p align = "center">

</p>
    
# rover simualtion rviz 
    $ roslaunch rover upload.launch
    $ rosrun rviz rviz
<p align = "center">
<img src="https://github.com/dongjineee/rover/assets/150753899/cb6a03f4-10ba-469b-bd1f-f62b3e90e64b" width="384" height="216"/>
</p>
<p align = "center">
URDF Preview
</p>
<p align = "center">
<img src="https://github.com/dongjineee/rover/assets/150753899/7c316ba2-5ce0-4bf9-8488-8f46a37f432d" width="384" height="216"/>
</p>
<p align = "center">
RVIZ
</p>


# rover simualtion in moon
    $ roslaunch rover moon_world.launch
<p align = "center">
<img src="https://github.com/dongjineee/rover/assets/150753899/85094c72-ccf6-4dcb-a684-941eae689d8e" width="384" height="216"/>
</p>
<p align = "center">
rover in the  moon at gazebo 
</p>
<p align = "center">
<img src="https://github.com/dongjineee/rover/assets/150753899/348baaa9-4454-4091-8ec3-6d428f1564fb" width="384" height="216"/>
</p>
<p align = "center">
The entirety of Moon World
</p>

