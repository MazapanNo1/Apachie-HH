#include "main.h"

void move(double right, double left, double time) {

right_wheel.move_velocity(right);
left_wheel.move_velocity(left);
pros::delay(time);

}
