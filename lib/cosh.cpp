#include "../src/Complex.h"
#include <cmath>
using namespace std;

Complex cosh(const Complex &c){
  double real_part = real(c);
  double imag_part = imag(c);
  double cosh_real = cosh(real_part) * 
  cos(imag_part);
  double cosh_imag = -sinh(real_part) * 
  sin(imag_part);
  return Complex(cosh_real, cosh_imag);
}

