#include "main.h"

void armMovement() {

  if (master.get_digital(DIGITAL_R1)) {
    left_arm.move_velocity(70);
    right_arm.move_velocity(-70);

  }
  else if(master.get_digital(DIGITAL_R2)) {
    left_arm.move_velocity(-70);
    right_arm.move_velocity(70);
  }

  else {
    left_arm.move_velocity(0);
    right_arm.move_velocity(0);
  }


  pros::delay(20);

}
