#include "../src/Complex.h"
using namespace std; 

Complex Complex::operator +=(Complex const &obj){
  double real = re + obj.re;
  double imag = im + obj.im;
  this -> re = real;
  this -> im = imag;
  return Complex(re, im);
}