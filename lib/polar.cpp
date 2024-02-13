#include "../src/Complex.h"
#include <cmath>
using namespace std;

Complex polar(double mag, double ang) {
  double real_part = mag * cos(ang);
  double imag_part = mag * sin(ang);
  return Complex(real_part, imag_part);
}

//https://www.varsitytutors.com/hotmath/hotmath_help/topics/polar-form-of-a-complex-number