#include "main.h"
#include "definition.h"

using namespace pros;

void blueAuton(){
  universalBeginning();
  /* leftInd(195, 100);
  simultaneous(100, 75);
  startIntake();
  simultaneous(200, 75);
  simultaneous(-200, 100);
  stopIntake(); */
  simultaneous(-350, 100);
  turnR(400, 100);
  simultaneous(550, 80);
  simultaneous(270, 50);
  autonAngle(700, 100);
  openIntake();
  intakeL.move(-70);
  intakeR.move(-70);
  autonAngle(100, 100);
  autonAngle(200, 50);
  simultaneous(75, 25);
  simultaneous(-500, 35);
  startIntake();
  stopIntake();
  /* simultaneous(200, 200);
  simultaneous(-150, 175);
  startIntake();
  simultaneous(500, 80);
  openIntake();
  simultaneous(400, 80);
  startIntake();
  simultaneous(100, 70);
  delay(250);
  simultaneous(-600, 80);
  turnR(420, 75);
  simultaneous(250, 50);
  autonAngle(800, 100);
  openIntake();
  autonAngle(200, 50);
  simultaneous(50, 25);
  simultaneous(-500, 35); */
}
