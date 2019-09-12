#include "main.h"
#include "definition.h"

using namespace pros;

void intakeControl(void* param){
  while(true){
    if(master.get_digital_new_press(E_CONTROLLER_DIGITAL_R1)){
      intaking = !intaking;
      intakeOpen = false;
    }
    if(master.get_digital_new_press(E_CONTROLLER_DIGITAL_Y)){
      if(!intakeOpen){
      tempIntaking = intaking;
      intaking = false;
      intakeOpen = true;
      }
      if(intakeOpen){
        intakeOpen = false;
        intaking = tempIntaking;
      }
    }
    if(!intaking && controlY && intakeOpen){
      intakeR.move(-150);
      intakeL.move(-150);
      }
    delay(20);
  }
}
