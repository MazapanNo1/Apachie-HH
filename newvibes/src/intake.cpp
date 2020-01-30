#include "main.h"

void intakeMovements() {


  if(master.get_digital(DIGITAL_UP)) {
    intake.move_velocity(70);
  }
  else if(master.get_digital(DIGITAL_DOWN)){
    intake.move_velocity(-70);
  }
  else {
    intake.move_velocity(0);
  }
  pros::delay(20);

}
