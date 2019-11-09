#include "main.h"
#include "definition.h"

using namespace pros;

void doBlue(){
  autonSelect = 1;
}

void doSkills(){
  autonSelect = 2;
}

void doRed(){
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
  while(fabs(chassisL.get_position() + dist) >= 25 ||
        fabs(chassisR.get_position() - dist) >= 25) delay(20);
}

void turnR(int dist, int speed){
  tareMotors();
  chassisL.move_relative(dist,  speed);
  chassisR.move_relative(-dist, speed);
  while(fabs(chassisL.get_position() - dist) >= 25 ||
        fabs(chassisR.get_position() + dist) >= 25) delay(20);
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

void openIntake(){
  intakeR.move_relative(-60, 100);
  intakeL.move_relative(-60, 100);
  intakeL.move(-60);
  intakeR.move(-60);
}

void correctIntake(){
  intakeR.move(0);
  intakeL.move_relative(-60, 100);
  delay(200);
  intakeL.move(200);
  intakeR.move(200);
  delay(500);
  intakeL.move(0);
  intakeR.move(0);
}

void autonAngle(int dist, int speed){
  float startingAngle = angle.get_position();
  angle.move_relative(dist, speed);
  while(fabs(angle.get_position() - dist - startingAngle) >= 25) delay(20);
}

void universalBeginning(){
  simultaneous(150, 200);
  simultaneous(-120, 175);
  startIntake();
  simultaneous(1030, 95);
  delay(100);
  stopIntake();
  delay(100);
  simultaneous(-600, 125);
}
