#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen.
brain  Brain;
controller Controller = controller(primary);
motor l1 = motor(PORT1, true);
motor l2 = motor(PORT1, false);
motor l3 = motor(PORT1, true);
motor r1 = motor(PORT1, true);
motor r2 = motor(PORT1, false);
motor r3 = motor(PORT1, false);

motor intake = motor(PORT2, false);

rotation vert = rotation(PORT4, true);
//The motor constructor takes motors as (port, ratio, reversed), so for example
//motor LeftFront = motor(PORT1, ratio6_1, false);

//Add your devices below, and don't forget to do the same in robot-config.h:


void vexcodeInit( void ) {
  // nothing to initialize
}
