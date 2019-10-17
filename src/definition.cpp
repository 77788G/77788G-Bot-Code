#include "main.h"
#include "definition.h"

using namespace pros;

Controller master(E_CONTROLLER_MASTER);

Motor chassisL(3, E_MOTOR_GEARSET_18, 0, E_MOTOR_ENCODER_DEGREES);
Motor chassisR(10, E_MOTOR_GEARSET_18, 1, E_MOTOR_ENCODER_DEGREES);
Motor chassisM(2, E_MOTOR_GEARSET_18, 1, E_MOTOR_ENCODER_DEGREES);
Motor intakeL(8, E_MOTOR_GEARSET_18, 1, E_MOTOR_ENCODER_DEGREES);
Motor intakeR(5, E_MOTOR_GEARSET_18, 0, E_MOTOR_ENCODER_DEGREES);
Motor liftR(9, E_MOTOR_GEARSET_06, 1, E_MOTOR_ENCODER_DEGREES);
Motor liftL(4, E_MOTOR_GEARSET_06, 0, E_MOTOR_ENCODER_DEGREES);
Motor angle(1, E_MOTOR_GEARSET_18, 1, E_MOTOR_ENCODER_DEGREES);

bool intaking = false;
bool tempIntaking = false;
bool intakeOpen = false;
int intakeSpeed = 0;

bool angling = false;

int autonSelect = 0;
