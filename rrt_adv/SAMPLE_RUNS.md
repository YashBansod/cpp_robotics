```shell script
+ ./cmake-build-release/rrt_adv -s '(30,-35,90)' -g '(0,0,5)' -e 10 -o ./inputs/obstacles.txt -m ./inputs/robot.txt -p ./outputs/path_output_1.txt -t ./outputs/search_output_1.txt -v -r 20
start: x: 30, y: -35 , o: 1.5708 , goal: x: 0, y: 0 , r: 5 , bias: 0, seed: 20, eps: 10, verbose: 1, iter_lim: 100000000
obs_fp: ./inputs/obstacles.txt
robo_fp: ./inputs/robot.txt
path_fp: ./outputs/path_output_1.txt
search_fp: ./outputs/search_output_1.txt 

Successfully opened the obstacle file: ./inputs/obstacles.txt
The obstacle file has 51 obstacles.
51 obstacles were added to obstacle vector.

Successfully opened the robot geometry file: ./inputs/robot.txt
36 points were added to robot geometry.

The search was successful. It took 3377 microseconds.
Start: x: 30, y: -35 , o: 1.5708 
Goal: x: 0, y: 0 , r: 5 

Successfully opened the path file: ./outputs/path_output_1.txt
Successfully wrote path file: "./outputs/path_output_1.txt".

Successfully opened the graph file: ./outputs/search_output_1.txt
Successfully wrote graph file: "./outputs/search_output_1.txt".

+ ./cmake-build-release/post_process -i ./outputs/path_output_1.txt -o ./outputs/traj_output_1.txt -v
v:1, i: ./outputs/path_output_1.txt, o: ./outputs/traj_output_1.txt

Successfully opened the path file: ./outputs/path_output_1.txt
6 points were added to path vector.

Successfully opened the trajectory file: ./outputs/traj_output_1.txt
Successfully wrote trajectory file: "./outputs/traj_output_1.txt".
```
This search was then visualized using [search_viz.py](./support_files/search_viz.py)  
![sol_1.png](./outputs/sol_1.png)

```shell script
+ ./cmake-build-release/rrt_adv -s '(40,-40,0)' -g '(30,40,5)' -e 5 -o ./inputs/obstacles.txt -m ./inputs/robot.txt -p ./outputs/path_output_2.txt -t ./outputs/search_output_2.txt -v -r 20
start: x: 40, y: -40 , o: 0 , goal: x: 30, y: 40 , r: 5 , bias: 0, seed: 20, eps: 5, verbose: 1, iter_lim: 100000000
obs_fp: ./inputs/obstacles.txt
robo_fp: ./inputs/robot.txt
path_fp: ./outputs/path_output_2.txt
search_fp: ./outputs/search_output_2.txt 

Successfully opened the obstacle file: ./inputs/obstacles.txt
The obstacle file has 51 obstacles.
51 obstacles were added to obstacle vector.

Successfully opened the robot geometry file: ./inputs/robot.txt
36 points were added to robot geometry.

The search was successful. It took 33934 microseconds.
Start: x: 40, y: -40 , o: 0 
Goal: x: 30, y: 40 , r: 5 

Successfully opened the path file: ./outputs/path_output_2.txt
Successfully wrote path file: "./outputs/path_output_2.txt".

Successfully opened the graph file: ./outputs/search_output_2.txt
Successfully wrote graph file: "./outputs/search_output_2.txt".

+ ./cmake-build-release/post_process -i ./outputs/path_output_2.txt -o ./outputs/traj_output_2.txt -v
v:1, i: ./outputs/path_output_2.txt, o: ./outputs/traj_output_2.txt

Successfully opened the path file: ./outputs/path_output_2.txt
30 points were added to path vector.

Successfully opened the trajectory file: ./outputs/traj_output_2.txt
Successfully wrote trajectory file: "./outputs/traj_output_2.txt".
```
This search was then visualized using [search_viz.py](./support_files/search_viz.py)  
![sol_2.png](./outputs/sol_2.png)

```shell script
+ ./cmake-build-release/rrt_adv -s '(30,40,270)' -g '(-50,-30,5)' -e 5 -o ./inputs/obstacles.txt -m ./inputs/robot.txt -p ./outputs/path_output_3.txt -t ./outputs/search_output_3.txt -v -r 20
start: x: 30, y: 40 , o: 4.71239 , goal: x: -50, y: -30 , r: 5 , bias: 0, seed: 20, eps: 5, verbose: 1, iter_lim: 100000000
obs_fp: ./inputs/obstacles.txt
robo_fp: ./inputs/robot.txt
path_fp: ./outputs/path_output_3.txt
search_fp: ./outputs/search_output_3.txt 

Successfully opened the obstacle file: ./inputs/obstacles.txt
The obstacle file has 51 obstacles.
51 obstacles were added to obstacle vector.

Successfully opened the robot geometry file: ./inputs/robot.txt
36 points were added to robot geometry.

The search was successful. It took 40809 microseconds.
Start: x: 30, y: 40 , o: 4.71239 
Goal: x: -50, y: -30 , r: 5 

Successfully opened the path file: ./outputs/path_output_3.txt
Successfully wrote path file: "./outputs/path_output_3.txt".

Successfully opened the graph file: ./outputs/search_output_3.txt
Successfully wrote graph file: "./outputs/search_output_3.txt".

+ ./cmake-build-release/post_process -i ./outputs/path_output_3.txt -o ./outputs/traj_output_3.txt -v
v:1, i: ./outputs/path_output_3.txt, o: ./outputs/traj_output_3.txt

Successfully opened the path file: ./outputs/path_output_3.txt
33 points were added to path vector.

Successfully opened the trajectory file: ./outputs/traj_output_3.txt
Successfully wrote trajectory file: "./outputs/traj_output_3.txt".
```
This search was then visualized using [search_viz.py](./support_files/search_viz.py)  
![sol_3.png](./outputs/sol_3.png)

```shell script
+ ./cmake-build-release/rrt_adv -s '(-50,-30,90)' -g '(30,-35,5)' -e 3 -o ./inputs/obstacles.txt -m ./inputs/robot.txt -p ./outputs/path_output_4.txt -t ./outputs/search_output_4.txt -v -r 20
start: x: -50, y: -30 , o: 1.5708 , goal: x: 30, y: -35 , r: 5 , bias: 0, seed: 20, eps: 3, verbose: 1, iter_lim: 100000000
obs_fp: ./inputs/obstacles.txt
robo_fp: ./inputs/robot.txt
path_fp: ./outputs/path_output_4.txt
search_fp: ./outputs/search_output_4.txt 

Successfully opened the obstacle file: ./inputs/obstacles.txt
The obstacle file has 51 obstacles.
51 obstacles were added to obstacle vector.

Successfully opened the robot geometry file: ./inputs/robot.txt
36 points were added to robot geometry.

The search was unsuccessful. It took 3 microseconds.
Start: x: -50, y: -30 , o: 1.5708 
Goal: x: 30, y: -35 , r: 5 

Successfully opened the path file: ./outputs/path_output_4.txt
Successfully wrote path file: "./outputs/path_output_4.txt".

Successfully opened the graph file: ./outputs/search_output_4.txt
Successfully wrote graph file: "./outputs/search_output_4.txt".

+ ./cmake-build-release/post_process -i ./outputs/path_output_4.txt -o ./outputs/traj_output_4.txt -v
v:1, i: ./outputs/path_output_4.txt, o: ./outputs/traj_output_4.txt

Successfully opened the path file: ./outputs/path_output_4.txt
0 points were added to path vector.

Successfully opened the trajectory file: ./outputs/traj_output_4.txt
Successfully wrote trajectory file: "./outputs/traj_output_4.txt".
```
This search was then visualized using [search_viz.py](./support_files/search_viz.py)  
![sol_4.png](./outputs/sol_4.png)

```shell script
+ ./cmake-build-release/rrt_adv -s '(-30,-35,45)' -g '(-35,30,5)' -e 2 -o ./inputs/obstacles.txt -m ./inputs/robot.txt -p ./outputs/path_output_5.txt -t ./outputs/search_output_5.txt -v -r 20
start: x: -30, y: -35 , o: 0.785398 , goal: x: -35, y: 30 , r: 5 , bias: 0, seed: 20, eps: 2, verbose: 1, iter_lim: 100000000
obs_fp: ./inputs/obstacles.txt
robo_fp: ./inputs/robot.txt
path_fp: ./outputs/path_output_5.txt
search_fp: ./outputs/search_output_5.txt 

Successfully opened the obstacle file: ./inputs/obstacles.txt
The obstacle file has 51 obstacles.
51 obstacles were added to obstacle vector.

Successfully opened the robot geometry file: ./inputs/robot.txt
36 points were added to robot geometry.

The search was successful. It took 40040 microseconds.
Start: x: -30, y: -35 , o: 0.785398 
Goal: x: -35, y: 30 , r: 5 

Successfully opened the path file: ./outputs/path_output_5.txt
Successfully wrote path file: "./outputs/path_output_5.txt".

Successfully opened the graph file: ./outputs/search_output_5.txt
Successfully wrote graph file: "./outputs/search_output_5.txt".

+ ./cmake-build-release/post_process -i ./outputs/path_output_5.txt -o ./outputs/traj_output_5.txt -v
v:1, i: ./outputs/path_output_5.txt, o: ./outputs/traj_output_5.txt

Successfully opened the path file: ./outputs/path_output_5.txt
62 points were added to path vector.

Successfully opened the trajectory file: ./outputs/traj_output_5.txt
Successfully wrote trajectory file: "./outputs/traj_output_5.txt".
```
This search was then visualized using [search_viz.py](./support_files/search_viz.py)  
![sol_5.png](./outputs/sol_5.png)