#include "../src/Complex.h"
#include <cmath>
using namespace std;

Complex sinh(const Complex c){
  double real_part = real(c);
  double imag_part = imag(c);
  double sinh_real = sinh(real_part) * cos(imag_part);
  double sinh_imag = cosh(real_part) * sin(imag_part);
  return Complex(sinh_real, sinh_imag);
}

//https://proofwiki.org/wiki/Hyperbolic_Sine_of_Complex_Number
