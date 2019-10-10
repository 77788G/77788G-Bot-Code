#include "main.h"
#include "definition.h"

using namespace pros;

void on_left_button(){
  autonSelect = 1;
}

void on_center_button(){
  autonSelect = 2;
}

void on_right_button(){
  autonSelect = 3;
}

void tareMotors(){
  chassisL.tare_position();
  chassisR.tare_position();
  chassisM.tare_position();
}

void simultaneous(int dist, int speed){
  tareMotors();
  chassisL.move_relative(dist, speed);
  chassisR.move_relative(dist, speed);
  chassisM.move_relative(dist, speed);
  while(fabs(chassisL.get_position() - dist) >= 25 ||
        fabs(chassisR.get_position() - dist) >= 25 ||
        fabs(chassisM.get_position() - dist) >= 25) delay(20);
}

void turnL(int dist, int speed){
  tareMotors();
  chassisL.move_relative(-dist, speed);
  chassisR.move_relative(dist,  speed);
  while(fabs(chassisL.get_position() - dist) >= 25 ||
        fabs(chassisR.get_position() - dist) >= 25) delay(20);
}

void turnR(int dist, int speed){
  tareMotors();
  chassisL.move_relative(dist,  speed);
  chassisR.move_relative(-dist, speed);
  while(fabs(chassisL.get_position() - dist) >= 25 ||
        fabs(chassisR.get_position() - dist) >= 25) delay(20);
}

void rightInd(int dist, int speed){
  tareMotors();
  chassisR.move_relative(dist,   speed);
  chassisM.move_relative(dist/2, speed/2);
  while(fabs(chassisM.get_position() - dist/2) >= 25 ||
        fabs(chassisR.get_position() - dist)   >= 25) delay(20);
}

void leftInd(int dist, int speed){
  tareMotors();
  chassisL.move_relative(dist,   speed);
  chassisM.move_relative(dist/2, speed/2);
  while(fabs(chassisM.get_position() - dist/2) >= 25 ||
        fabs(chassisL.get_position() - dist)   >= 25) delay(20);
}

void startIntake(){
  intakeL.move(200);
  intakeR.move(200);
}

void stopIntake(){
  intakeL.move(0);
  intakeR.move(0);
}
