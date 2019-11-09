#include "main.h"
#include "definition.h"

using namespace pros;

void initialize() {
	autonSelect = 0;
	liftR.set_brake_mode(E_MOTOR_BRAKE_HOLD);
	liftL.set_brake_mode(E_MOTOR_BRAKE_HOLD);
	intakeL.set_brake_mode(E_MOTOR_BRAKE_HOLD);
	intakeR.set_brake_mode(E_MOTOR_BRAKE_HOLD);
	angle.set_brake_mode(E_MOTOR_BRAKE_HOLD);
	lcd::initialize();
	lcd::print(0, "I USED TO THINK MY LIFE WAS A TRAGEDY");
	lcd::print(1, "BUT NOW I REALIZE IT'S A COMEDY");
	lcd::register_btn0_cb(doBlue);
	lcd::register_btn1_cb(doSkills);
	lcd::register_btn2_cb(doRed);
}

//this is a test (an certified hood moment)

void disabled() {}

void competition_initialize() {}
