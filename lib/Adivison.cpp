#include "../src/Complex.h"
using namespace std;

 Complex Complex::operator / (const Complex &obj) {
   double re2 = real(obj);
   double im2 = imag(obj);
   double numerator = (re * re) + (im2 * im2);
   double denominator = (re2 * re2) + (im2 * im2);
   Complex product = Complex(numerator / denominator, -1 * (im * re2) / denominator);
  return product;
}
