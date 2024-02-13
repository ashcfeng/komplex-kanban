#include "../src/Complex.h"
#include "overloaddivide=.cpp"
#include <cmath>
Complex tan(const Complex a){
  const Complex b(sin(2*real(a))/(cos(2*real(a)) + cosh(2*imag(a))), sinh(2*imag(a)) / (cos(2*real(a)) + cosh(2*imag(a))));
  return b;
}