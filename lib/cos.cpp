#include "../src/Complex.h"
#include <cmath> 
Complex cos(const Complex a){
  Complex b(cos(real(a)) * cosh(imag(a)),-sin(real(a))*sinh(imag(a)));
  return b;
}