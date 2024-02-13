#include <cmath>
#include "../src/Complex.h"
#define e 2.7182818284590452353602874713527
Complex exp(const Complex x) {
  return pow(e, x);
}