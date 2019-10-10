#include "main.h"
#include "definition.h"

using namespace pros;

void redAuton(){
  startIntake();
  simultaneous(750, 100);
  stopIntake();
  simultaneous(-500, 100);
  turnR(135, 100);
  simultaneous(100, 75);
  angle.move_relative(100, 70);
  openIntake();
  angle.move_relative(20, 70);
  simultaneous(20, 50);
  simultaneous(-100, 100);
}
