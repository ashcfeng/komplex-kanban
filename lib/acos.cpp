#define _USE_MATH_DEFINES
#include "../src/Complex.h"
#include <cmath>


Complex acos(const Complex a){
  Complex val = asin(a);
  return Complex((M_PI/2) - real(val), -1 *imag(val));
}