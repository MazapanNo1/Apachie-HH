#include "main.h"

void DriveControls() {

    int left = master.get_analog(ANALOG_LEFT_Y);
    int right = master.get_analog(ANALOG_RIGHT_Y) * -1;

    left_wheel = left;
    right_wheel = right;
    pros::delay(20);

}
