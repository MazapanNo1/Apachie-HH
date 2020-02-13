#include "main.h"

void move(double right, double left, double time) {

right_wheel.move_velocity(right);
left_wheel.move_velocity(left);
pros::delay(time);



void oneCubeUnit(){
  right_wheel.move_velocity(70);
  left_wheel.move_velocity(70);
  pros::delay(500);

}

int coordinatnt(double x, double y){


}

void movement(){


}
}
