#pragma once

#include "api.h"

// this is where you define your ports on your Vex brain

inline pros::MotorGroup intake({1, 11});  // Negative port will reverse the motor

// Your motors, sensors, etc. should go here.  Below are examples

inline pros::Motor tilter(9);
// inline pros::adi::DigitalIn limit_switch('A');
