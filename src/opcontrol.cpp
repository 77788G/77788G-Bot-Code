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

    if(controlR1) intaking = !intaking;
    intakeL.move(200*intaking);
    intakeR.move(200*intaking);
  }
}
