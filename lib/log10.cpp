#include "../src/Complex.h"
#include <cmath>
using namespace std;

Complex log10(const Complex c) {
  Complex natural_log = log(c);
  return Complex(real(natural_log)/log(10), imag(natural_log)/log(10));
}