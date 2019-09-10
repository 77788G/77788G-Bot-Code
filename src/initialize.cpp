#include "main.h"
#include "definition.h"

using namespace pros;

void initialize() {
	lift.set_brake_mode(E_MOTOR_BRAKE_HOLD);
	intakeL.set_brake_mode(E_MOTOR_BRAKE_HOLD);
	intakeR.set_brake_mode(E_MOTOR_BRAKE_HOLD);
}

void disabled() {}

void competition_initialize() {}
