#include "main.h"
#include "definition.h"

using namespace pros;

void opcontrol(){
  while(true){
    chassisLF.move(leftY);
    chassisLB.move(leftY);
    chassisRF.move(rightY);
    chassisRB.move(rightY);

    lift.move((controlR2 - controlL2)*100);

    angle.move((controlL1 - controlRight)*30);

    intakeR.move(200*intaking);
    intakeL.move(200*intaking);
  }
}
