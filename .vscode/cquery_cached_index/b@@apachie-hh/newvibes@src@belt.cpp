#include "main.h"

void belt_Movement() {

  if(master.get_digital(DIGITAL_L1)) {
    left_belt.move_velocity(-70);
    right_belt.move_velocity(70);
  }

  else if(master.get_digital(DIGITAL_L2)) {
    left_belt.move_velocity(70);
    right_belt.move_velocity(-70);
  }

  else {
    left_belt.move_velocity(0);
    right_belt.move_velocity(0);
  }


  pros::delay(20);

}
