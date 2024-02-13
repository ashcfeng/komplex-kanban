#include "../src/Complex.h"
#include <cmath>

Complex asin(const Complex a) {
  Complex temp1 = a;
  Complex temp2 = temp1 * temp1;

  temp2.re = 1 - real(temp2);
  temp2.im = -1 * imag(temp2);
  
  Complex value = pow(temp2, 0.5);


  Complex lastPart(-1 * imag(temp1), real(temp1));

  Complex sum = value + lastPart;

  Complex c = log(sum);

  
  

  return Complex(imag(c),-real(c) );
}