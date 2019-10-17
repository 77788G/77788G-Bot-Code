#include "main.h"
#include "definition.h"

using namespace pros;

void anglerControl(void* param){
  while(true){
    if(master.get_digital_new_press(E_CONTROLLER_DIGITAL_RIGHT)) angling = !angling;
    while(angling){
      if(angle.get_position() < 35) angle.move_absolute(90, 90);
      else if(angle.get_position() >= 35) angle.move_absolute(90, 45);
    }
    if(master.get_digital_new_press(E_CONTROLLER_DIGITAL_L1)) angling = 0;
    if(controlL1) angle.move(-70);
    delay(20);
  }
}
