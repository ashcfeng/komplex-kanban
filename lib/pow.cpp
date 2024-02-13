#include "../src/Complex.h"
#include <cmath>


Complex pow(const Complex a, int p) {



  Complex result = Complex(a.re, a.im);
  Complex multiply = Complex(a.re, a.im);
  for(int i = 0; i<p-1; i++) {
    result = result * multiply;
  }
  return result;
  /*(a+bi)(c+di) = (ac-bd) + i(ad+bc)
  a = 1
  b = 2
  c=1
  d=2
  (1-4) + i(2+2)
  -3 + 4i

  */
  
}

Complex pow(Complex a, double p) {
  //theta = arg(a)


  double theta = arg(a);
  double r = abs(a);
  double re = (cos(theta*p)) * std::pow(r,p);
  double im = (sin(theta*p)) * std::pow(r,p);
  return Complex(re,im);

  //sqrt(a^2+b^2) = abs(a)
  // a+bi
  //pow(abs(a), exp) * (cos*(p*theta)+i*sin(p*theta))
  // re = pow(abs(a), p)*(cos(p*theta))
  // im = pow(abs(a),p)*(sin(p*theta))
  // return Complex(re, im);
  
  
}

Complex pow(Complex a, Complex p) {


  double theta = arg(a);
  double r = abs(a);
  
  double re = log(r)*p.re + log(r)*p.im;
  double im = theta*p.re + theta*p.im;
  Complex ret = exp(Complex(re,im));
  return ret;

  //theta = arg(a)
  // a+bi
  // r = sqrt(a^2+b^2)
  // r = abs(a)
  //e^( (ln(r)*p) + (i*theta*p))
  //exp(Complex(ln(r)*exp, theta*p))
  // return exp(Complex(ln(r)*p, theta*p));
}

Complex pow(double a, Complex p) {


  double re = std::pow(a,p.re) * cos(p.im*std::log(a));
  double im = std::pow(a,p.re)*sin(p.im*std::log(a));
  return Complex(re,im);
  

  //(a^p.re)*(cos(p.im*ln(a)) + i*sin(p.im*ln(a))
  //re = a^p.re*(cos(p.im*ln(a))
  //im = a^p.re*(sin(p.im*ln(a))
  // return Complex(re, im);
}
/*
https://www.quora.com/What-actually-is-raising-a-complex-number-as-a-power-to-a-real-number-mean

https://math.stackexchange.com/questions/476968/complex-power-of-a-complex-number

https://math.stackexchange.com/questions/1397437/formula-for-raising-a-complex-number-to-a-power
*/