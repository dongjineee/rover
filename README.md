
# rover vr 02
1. rover simualation 중간 단계 ( 플랫폼 배송전이므로 영상에서 보이는 것을 참고하여 만듦 ㅎ)
2. rover urdf, gazebo, moonworld, rover_teleop 포함

# rover simualtion rviz 
    $ roslaunch rover bringup.launch
    $ roslaunch rover controller.launch
    
    $ roslaunch rover rover_teleop_keyboard.launch #키보드 입력
    $ roslaunch rover rover_teleop_xbox.launch #xbox 입력
    
<p align = "center">
<img src="https://github.com/dongjineee/rover/assets/150753899/79ce4e89-d6a9-476b-aecb-70ec3c2e9776" width="700" height="400"/>
</p>

<p align = "center">
only angular.z
</p>

</p>
<p align = "center">
<img src="https://github.com/dongjineee/rover/assets/150753899/af620946-8386-40f8-b1a9-dfe3bc1baaf5" width="700" height="400"/>
</p>
<p align = "center">
only linear.x
</p>


</p>
<p align = "center">
<img src="https://github.com/dongjineee/rover/assets/150753899/3a6c15ea-95ed-4dda-b19f-91de0a7809a9" width="700" height="400"/>
</p>
<p align = "center">
linear.x, angular.z
</p>



# rover simualtion rviz 
    $ roslaunch rover rover.launch
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

