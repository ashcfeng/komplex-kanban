#include "../src/Complex.h"
using namespace std;

Complex tanh(const Complex &v){
  Complex c = sinh(v)/cosh(v);
  return c;
}
