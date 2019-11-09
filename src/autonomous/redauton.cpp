#include "main.h"
#include "definition.h"

using namespace pros;

void redAuton(){
  universalBeginning();
  rightInd(95, 100);
  simultaneous(500, 75);
  startIntake();
  simultaneous(200, 75);
  simultaneous(-700, 100);
  stopIntake();
  turnR(470, 75);
  simultaneous(300, 50);
  autonAngle(1050, 100);
  openIntake();
  autonAngle(350, 50);
  simultaneous(50, 25);
  simultaneous(-500, 75);
}
