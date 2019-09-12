#include "main.h"
#include "definition.h"

using namespace pros;

void opcontrol(){
  while(true){
    int leftY = master.get_analog(E_CONTROLLER_ANALOG_LEFT_Y);
    int leftX = master.get_analog(E_CONTROLLER_ANALOG_LEFT_X);
    int rightY = master.get_analog(E_CONTROLLER_ANALOG_RIGHT_Y);
    int rightX = master.get_analog(E_CONTROLLER_ANALOG_RIGHT_X);
    bool controlA = master.get_digital(E_CONTROLLER_DIGITAL_A);
    bool controlB = master.get_digital(E_CONTROLLER_DIGITAL_B);
    bool controlY = master.get_digital(E_CONTROLLER_DIGITAL_X);
    bool controlX = master.get_digital(E_CONTROLLER_DIGITAL_Y);
    bool controlUp = master.get_digital(E_CONTROLLER_DIGITAL_UP);
    bool controlDown = master.get_digital(E_CONTROLLER_DIGITAL_DOWN);
    bool controlLeft = master.get_digital(E_CONTROLLER_DIGITAL_LEFT);
    bool controlRight = master.get_digital(E_CONTROLLER_DIGITAL_RIGHT);
    bool controlL1 = master.get_digital(E_CONTROLLER_DIGITAL_L1);
    bool controlL2 = master.get_digital(E_CONTROLLER_DIGITAL_L2);
    bool controlR1 = master.get_digital(E_CONTROLLER_DIGITAL_R1);
    bool controlR2 = master.get_digital(E_CONTROLLER_DIGITAL_R2);

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
