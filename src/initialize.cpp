#include "main.h"
#include "definition.h"

using namespace pros;

void initialize() {
	autonSelect = 2;
	liftR.set_brake_mode(E_MOTOR_BRAKE_HOLD);
	liftL.set_brake_mode(E_MOTOR_BRAKE_HOLD);
	intakeL.set_brake_mode(E_MOTOR_BRAKE_HOLD);
	intakeR.set_brake_mode(E_MOTOR_BRAKE_HOLD);
	angle.set_brake_mode(E_MOTOR_BRAKE_HOLD);
	lcd::initialize();
	lcd::print(0, "RAM RANCH REALLY ROCKS");
	lcd::register_btn0_cb(doBlue);
	lcd::register_btn1_cb(doSkills);
	lcd::register_btn2_cb(doRed);
}

void disabled() {}

void competition_initialize() {}
