#include "main.h"

#define LEFT_WHEEL_PORT 1
#define RIGHT_WHEEL_PORT 2
#define LEFT_ARM_PORT 10
#define RIGHT_ARM_PORT 9
#define LEFT_BELT_PORT 4
#define RIGHT_BELT_PORT 5
#define CUBE_TRAY_PORT 7

//declaring the MOTORs exist in the program
extern pros::Motor left_wheel;
extern pros::Motor right_wheel;

extern pros::Motor left_arm;
extern pros::Motor right_arm;

extern pros::Motor left_belt;
extern pros::Motor right_belt;

extern pros::Motor intake;

//CONTROLLER
extern pros::Controller master;
