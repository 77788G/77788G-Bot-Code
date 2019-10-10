#include "main.h"
#include "definition.h"

using namespace pros;

void autonomous(){
  if(autonSelect      == 1) blueAuton();
  else if(autonSelect == 3) redAuton();
}
