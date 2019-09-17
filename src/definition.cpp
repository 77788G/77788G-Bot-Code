#include "main.h"
#include "definition.h"

using namespace pros;

Controller master(E_CONTROLLER_MASTER);

Motor chassisL(1, E_MOTOR_GEARSET_18, 0, E_MOTOR_ENCODER_DEGREES);
Motor chassisR(10, E_MOTOR_GEARSET_18, 1, E_MOTOR_ENCODER_DEGREES);
Motor chassisM(2, E_MOTOR_GEARSET_18, 1, E_MOTOR_ENCODER_DEGREES);
Motor intakeL(3, E_MOTOR_GEARSET_18, 0, E_MOTOR_ENCODER_DEGREES);
Motor intakeR(19, E_MOTOR_GEARSET_18, 1, E_MOTOR_ENCODER_DEGREES);
Motor lift(20, E_MOTOR_GEARSET_06, 0, E_MOTOR_ENCODER_DEGREES);
Motor angle(4, E_MOTOR_GEARSET_18, 0, E_MOTOR_ENCODER_DEGREES);

bool intaking = false;
bool tempIntaking = false;
bool intakeOpen = false;
