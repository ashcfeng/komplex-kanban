#include "../src/Complex.h"
using namespace std;

Complex Complex::operator -(const Complex& obj){
  double real_part = re - real(obj);
  double imag_part = im - imag(obj);
  return Complex(real_part, imag_part);
}