#include "main.h"
#include "definition.h"

using namespace pros;

void opcontrol(){
  bool intaking = false;
  while(true){
    chassisLF.move(leftY);
    chassisLB.move(leftY);
    chassisRF.move(rightY);
    chassisRB.move(rightY);

    lift.move((controlL1 - controlL2)*100);

    angle.move((controlR1 - controlR2)*30);

    intakeR.move(200*intaking);
    intakeL.move(200*intaking);
  }
}
