#include "main.h"
#include "definition.h"

using namespace pros;

Controller master(E_CONTROLLER_MASTER);

Motor chassisLF(1, E_MOTOR_GEARSET_18, 0, E_MOTOR_ENCODER_DEGREES);
Motor chassisLB(2, E_MOTOR_GEARSET_18, 1, E_MOTOR_ENCODER_DEGREES);
Motor chassisRF(11, E_MOTOR_GEARSET_18, 1, E_MOTOR_ENCODER_DEGREES);
Motor chassisRB(12, E_MOTOR_GEARSET_18, 0, E_MOTOR_ENCODER_DEGREES);
Motor intakeL(3, E_MOTOR_GEARSET_18, 0, E_MOTOR_ENCODER_DEGREES);
Motor intakeR(1, E_MOTOR_GEARSET_18, 1, E_MOTOR_ENCODER_DEGREES);
Motor lift(20, E_MOTOR_GEARSET_06, 0, E_MOTOR_ENCODER_DEGREES);
Motor angle(4, E_MOTOR_GEARSET_18, 0, E_MOTOR_ENCODER_DEGREES);

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

bool intaking = false;
bool tempIntaking = false;
bool intakeOpen = false;
