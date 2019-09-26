#include "main.h"
#include "definition.h"

using namespace pros;

void intakeControl(void* param){
   while(true){
     if(master.get_digital_new_press(E_CONTROLLER_DIGITAL_Y)){
       intaking = 0;
       intakeR.move_relative(-30, 150);
       intakeL.move_relative(-30, 150);
     }
     else if (!controlY){
       intakeSpeed = 200 * intaking;
       intakeR.move(intakeSpeed);
       intakeL.move(intakeSpeed);
     }
     if(master.get_digital_new_press(E_CONTROLLER_DIGITAL_R1)){
       intaking = !intaking;
     }
     delay(20);
  }
}
