#include "PID.h"

//using namespace std;

/*
* TODO: Complete the PID class.
*/

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp, double Ki, double Kd) {
  Kp_ = Kp;
  Ki_ = Ki;
  Kd_ = Kd;

  p_error = 0;
  i_error = 0;
  d_error = 0;
}

void PID::UpdateError(double cte) {
  d_error = cte - p_error; // diff with previous cte and current cte
  p_error = cte; // update current cte
  i_error += cte; // cumulate cte
}

double PID::TotalError() {
  double result = -(Kp_ * p_error ) - (Ki_ * i_error) - (Kd_ * d_error);
  return result;
}
