#include "../src/Complex.h"
#include <cmath>
Complex sin(const Complex a){
  Complex b(sin(real(a)) * cosh(imag(a)),cos(real(a))*sinh(imag(a)));
  return b;
}