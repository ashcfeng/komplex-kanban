#include "../src/Complex.h"
#include <cmath>
using namespace std;

Complex log(const Complex c) {
  return Complex(log(abs(c)), arg(c));
}

//https://books.physics.oregonstate.edu/LinAlg/logs.html
// r = magnitude, theta = arg, let m = 0