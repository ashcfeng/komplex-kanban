#include "../src/Complex.h"
using namespace std; 

Complex conj(Complex const obj){
  return Complex(obj.re, obj.im - (2 * obj.im));
}