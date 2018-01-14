# PID Controller

In this project you I handled PID controller to activate autonomous driving simulator around a given track using by C++ in Udacity's Self-Driving Car Nanodegree.

You can find starter code created by the Udacity on [here](https://github.com/udacity/CarND-PID-Control-Project).

---

[//]: # (Image References)
[image1]: ./assets/1_crash.gif
[image2]: ./assets/2_break.gif
[image3]: ./assets/3_result.gif

## Dependencies
* [Simulator](https://github.com/udacity/self-driving-car-sim/releases)
* [uWebSocketIO](https://github.com/uWebSockets/uWebSockets)
* cmake >= 3.5
  * All OSes: [click here for installation instructions](https://cmake.org/install/)
* make >= 4.1 (Linux, Mac), 3.81 (Windows)
  * Linux: make is installed by default on most Linux distros
  * Mac: [install Xcode command line tools to get make](https://developer.apple.com/xcode/features/)
  * Windows: [Click here for installation instructions](http://gnuwin32.sourceforge.net/packages/make.htm)
* gcc/g++ >= 5.4
  * Linux: gcc / g++ is installed by default on most Linux distros
  * Mac: same deal as make - [install Xcode command line tools](https://developer.apple.com/xcode/features/)
  * Windows: recommend using [MinGW](http://www.mingw.org/)

## How to use
1. Clone this repo.
2. Make a build directory: `mkdir build && cd build`
3. Compile: `cmake .. && make`
    * On windows, you may need to run: `cmake .. -G "Unix Makefiles" && make`
4. Run it: `./pid`
5. Run Simulator with Project 4: PID Controller
6. Click Start button

## Result
First step, I set up PID parameters on steering angle `1.0`. Then, the car is not able to drive well like below.

<center>
![Crash][image1]
</center>

Okay, I need to tune parameters manually until that the vehicle drives keep in the lane line. Also, I want to reduce over and under steering when the car turned the corners. That is why I add PID parameters on throttle. Look at the image below.

<center>
![Break][image2]
</center>

Driving is better than first image, but it still looks ugly, decreasing speed suddenly. I tuned all of parameters, which are PID of steering angle and throttle. Finally, I can get a good result like below.

<center>
![Result][image3]
</center>

## Further To Do
I did not apply **twiddle** algorithm due to have a problem updating parameters automatically. Also, the parameters should tune again if we want to drive faster than my result: AVG 35 mph.
