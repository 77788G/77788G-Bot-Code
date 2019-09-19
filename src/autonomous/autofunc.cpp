#include "main.h"
#include "definition.h"

using namespace pros;

void driveStraight(int dist, int speed){
  chassisLB.move_relative(dist, speed);
  chassisLF.move_relative(dist, speed);
  chassisRB.move_relative(dist, speed);
  chassisRF.move_relative(dist, speed);
}

void turnL(int dist, int speed){
  chassisLB.move_relative(-dist, speed);
  chassisLF.move_relative(-dist, speed);
  chassisRB.move_relative(dist, speed);
  chassisRF.move_relative(dist, speed);
}

void turnR(int dist, int speed){
  chassisLB.move_relative(dist, speed);
  chassisLF.move_relative(dist, speed);
  chassisRB.move_relative(-dist, speed);
  chassisRF.move_relative(-dist, speed);
}

void rightInd(int dist, int speed){
  chassisRF.move_relative(dist, speed);
  chassisRB.move_relative(dist, speed);
}

void leftInd(int dist, int speed){
  chassisLF.move_relative(dist, speed);
  chassisLB.move_relative(dist, speed);
}
