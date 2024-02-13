#include "../src/Complex.h"
using namespace std; 

Complex Complex::operator /=(Complex const& obj) {
  double real = ((re*obj.re) + (im * obj.im))/((obj.re*obj.re) + (obj.im*obj.im));
  double imag = ((im*obj.re) - (re*obj.im))/((obj.re*obj.re)+(obj.im*obj.im));
  this -> re = real;
  this -> im = imag;
  return Complex(real,imag);
}