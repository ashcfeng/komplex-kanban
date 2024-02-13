#include "../src/Complex.h"
#include <cmath>

double abs(const Complex c){
  double mag = sqrt((real(c) * real(c)) + (imag(c) * imag(c)));
  mag = abs(mag);
  return mag;
}