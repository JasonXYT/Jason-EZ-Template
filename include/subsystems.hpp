#pragma once

#include "api.h"


inline pros::MotorGroup intake({9, 10});  // Negative port will reverse the motor

// Your motors, sensors, etc. should go here.  Below are examples

inline pros::Motor tilter(16);
// inline pros::adi::DigitalIn limit_switch('A');