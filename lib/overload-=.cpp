
#include "../src/Complex.h"
  Complex Complex::operator -=(const Complex& obj){
    double real = this -> re - obj.re;
    double imaginary = this -> im - obj.im;
    this -> re = real;
    this -> im = imaginary;
    return Complex(real, imaginary);
  }
