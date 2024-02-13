#define _USE_MATH_DEFINES
#include "../src/Complex.h"
#include <cmath>

// Returns an angle between -pi and pi
double arg(const Complex c){
  double angle;

  if(real(c) == 0){
    if(imag(c) == 0){
      return 0;
    }else if (imag(c) > 0){
      return M_PI/2;
    }else {
      return -M_PI/2;
    }
  }
  
  angle = atan(imag(c)/real(c));
  if (real(c) < 0 && imag(c) > 0){
    angle += M_PI;
  } else if (real(c) < 0 && imag(c) < 0){angle -= M_PI;}
  return angle; 
  
}