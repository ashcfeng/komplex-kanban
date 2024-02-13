#include <iostream>
#ifndef COMPLEX_H
#define COMPLEX_H


using namespace std;
class Complex{
  //private:
  public:
  double re, im; //Instance variables real and imaginary
  Complex() {re=0.0; im=0.0;} //Constructor initializes to 0 for real and imaginary
  Complex(double r) {re=r; im=0.0;} //Constructor initializes value real to r
  Complex(double r, double i) {re=r; im=i;}//Constructor intializes real to r and imaginary to i

  Complex operator +(Complex const& obj); //Adds two Complex values together
  Complex operator -(Complex const& obj); //Subtracts one Complex value from another
  Complex operator *(Complex const& obj); //Multiplies two Complex numbers together
  Complex operator /(Complex const& obj); //Divides one Complex number from the current one
  Complex operator +=(Complex const& obj); //Adds the Complex by another one and sets it equal to the result
  Complex operator -=(Complex const& obj); //Substracts the Complex by another one and sets it equal to the result
  Complex operator *=(Complex const& obj); //Multiplies the Complex by another one and sets it equal to the result
  Complex operator /=(Complex const& obj); //Divides the Complex by another one and sets it equal to the result
  bool operator !=(Complex const& obj) ; //Tests for inequality of Complex Numbers
  bool operator==(Complex const& obj) ; //Tests for equality among Complex Numbers

  friend ostream& operator <<(ostream&, const Complex&); //inserter
  friend istream& operator >>(istream&, Complex&); //extractor
}; 
double abs(const Complex); //Returns the magnitude of a Complex number. 
double arg(const Complex); //Returns the angle of a Complex number. 
Complex conj(const Complex); //Returns the Complex conjugate of its argument. 
double imag(const Complex&); //Returns the imaginary part of a Complex number.
double norm(const Complex); //Returns the square of the magnitude of its argument. Faster than abs, but more likely to cause an overflow. For comparing magnitudes.
Complex polar(double mag, double ang=0.0); //Takes a pair of polar coordinates that represent the magnitude and angle of a Complex number and returns the corresponding Complex number. 
double real(const Complex&); //Returns the real part of a Complex number. 
Complex acos(const Complex); //Returns the angle whose cosine is its argument. 
Complex asin(const Complex); //Returns the angle whose sine is its argument. 
Complex atan(const Complex); //Returns the angle whose tangent is its argument. 
Complex cos(const Complex); //Returns the cosine of its argument. 
Complex cosh(const Complex); //Returns the hyperbolic cosine of its argument.
Complex exp(const Complex); //Computes e**x, where e is the base of the natural logarithms, and x is the argument given to exp.
Complex log(const Complex); //Returns the natural logarithm of its argument. 
Complex log10(const Complex); //Returns the common logarithm of its argument.  
Complex pow(double b, const Complex exp);
Complex pow(const Complex b,int exp); 
Complex pow(const Complex b, double exp); 
Complex pow(const Complex b, const Complex exp); //Takes two arguments: pow(b, exp). It raises b to the power of exp.
Complex sin(const Complex); //Returns the sine of its argument.
Complex sinh(const Complex); //Returns the hyperbolic sine of its argument. 
Complex sqrt(const Complex);//Returns the square root of its argument. 
Complex tan(const Complex); //Returns the tangent of its argument.
Complex tanh(const Complex);  //Returns the hyperbolic tangent of its argument. 
#endif/*Complex.h*/