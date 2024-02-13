#include "../src/Complex.h"
using namespace std;

bool Complex::operator==(Complex const&obj) {
  return re == obj.re && im == obj.im;
}