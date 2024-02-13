#include "../src/Complex.h"


double norm (const Complex c){
  return (real(c) * real(c)) + (imag(c) * imag(c));
}