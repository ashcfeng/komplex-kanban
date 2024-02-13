#include "../src/Complex.h"
Complex Complex::operator +(const Complex& a){
  double real = this -> re + a.re;
  double imag = this -> im + a.im;
  return Complex(real,imag);
}