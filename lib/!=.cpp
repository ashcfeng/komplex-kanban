#include "../src/Complex.h"
using namespace std; 


bool Complex::operator!= (Complex const &c){

  return !(re == c.re && im == c.im);
}