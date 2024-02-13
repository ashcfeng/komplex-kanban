#include "../src/Complex.h"
#include <cmath>
#define _USE_MATH_DEFINES

Complex atan(const Complex c){
  Complex val = c;
  Complex numerator = Complex(-real(val),1-imag(val));
  Complex denominator = Complex(real(val),1+imag(val));
  numerator /= denominator;
  Complex value = log(numerator);
  return Complex((0.5) * imag(value),(-0.5) * real(value));
}