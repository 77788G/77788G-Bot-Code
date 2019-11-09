#include "main.h"
#include "definition.h"

using namespace pros;

void blueAuton(){
  universalBeginning();
  leftInd(95, 100);
  simultaneous(500, 75);
  startIntake();
  simultaneous(200, 75);
  simultaneous(-700, 100);
  stopIntake();
  turnL(470, 75);
  simultaneous(300, 50);
  autonAngle(800, 100);
  openIntake();
  autonAngle(200, 40);
  simultaneous(50, 25);
  simultaneous(-500, 75);
}
