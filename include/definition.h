#pragma once
#include "main.h"

extern pros::Motor chassisL;
extern pros::Motor chassisR;
extern pros::Motor chassisM;
extern pros::Motor intakeL;
extern pros::Motor intakeR;
extern pros::Motor lift;
extern pros::Motor angle;

extern pros::Controller master;

extern int leftY;
extern int leftX;
extern int rightY;
extern int rightX;

extern bool controlA;
extern bool controlB;
extern bool controlX;
extern bool controlY;
extern bool controlUp;
extern bool controlDown;
extern bool controlLeft;
extern bool controlRight;
extern bool controlL1;
extern bool controlL2;
extern bool controlR1;
extern bool controlR2;

extern bool intaking;
extern bool tempIntaking;
extern bool intakeOpen;
extern int intakeSpeed;
