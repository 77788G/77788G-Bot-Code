#include "main.h"
#include "definition.h"

using namespace pros;

void driveStraight(int dist, int speed){
  chassisL.move_relative(dist, speed);
  chassisR.move_relative(dist, speed);
  chassisM.move_relative(dist, speed);
}

void turnL(int dist, int speed){
  chassisL.move_relative(-dist, speed);
  chassisR.move_relative(dist, speed);
}

void turnR(int dist, int speed){
  chassisL.move_relative(dist, speed);
  chassisR.move_relative(-dist, speed);
}

void rightInd(int dist, int speed){
  chassisR.move_relative(dist, speed);
  chassisM.move_relative(dist/2, speed/2);
}

void leftInd(int dist, int speed){
  chassisL.move_relative(dist, speed);
  chassisM.move_relative(dist/2, speed/2);
}
