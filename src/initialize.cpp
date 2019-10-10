#include "main.h"
#include "definition.h"

using namespace pros;



void initialize() {
	liftR.set_brake_mode(E_MOTOR_BRAKE_HOLD);
	liftL.set_brake_mode(E_MOTOR_BRAKE_HOLD);
	intakeL.set_brake_mode(E_MOTOR_BRAKE_HOLD);
	intakeR.set_brake_mode(E_MOTOR_BRAKE_HOLD);
	lcd::initialize();
	lcd::print(0, "RAM RANCH REALLY ROCKS");
	lcd::register_btn0_cb(on_center_button);
	lcd::register_btn1_cb(on_left_button);
	lcd::register_btn2_cb(on_right_button);
}

void disabled() {}

void competition_initialize() {}
