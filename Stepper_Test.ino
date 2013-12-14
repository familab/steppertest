/*
 * Stepper_Test - drives a bipolar stepper using the Step library
 *
 */

#include <Stepper.h>

// change this to the number of steps on your motor
#define STEPS 512

// create an instance of the stepper class, specifying
// the number of steps of the motor and the pins it's
// attached to
Stepper stepper(STEPS, 2, 3, 4, 5);

// the previous reading from the analog input
int previous = 0;

void setup()
{
  // set the speed of the motor to 30 RPMs
  stepper.setSpeed(50);
}

void loop()
{
  // get the sensor value
  int val = 1000;

  // move a number of steps equal to the change in the
  // sensor reading
  stepper.step(val);
  delay(1000);
  stepper.step(val * -1);
  delay(1000);

  // remember the previous value of the sensor
//  previous = val;
}

