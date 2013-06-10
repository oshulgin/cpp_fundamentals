#include "complex0.h"

Complex::Complex() {
	re = 0.0;
	im = 0.0;
}

Complex::Complex(double x, double y) {
	re = x;
	im = y;
}

Complex Complex::operator+(const Complex& c) const {
	return Complex(re + c.re, im + c.im);
}

Complex Complex::operator-(const Complex& c) const {
	return Complex(re - c.re, im - c.im);
}

Complex Complex::operator*(const Complex& c) const {
	Complex tmp;
	tmp.re = this->re * c.re - this->im * c.im;
	tmp.im = c.re * this->im + this->re * c.im;
	return tmp;
}

double Complex::getRe() const { return re; }
double Complex::getIm() const { return im; }

void Complex::setRe(double x) { re = x; }
void Complex::setIm(double y) { im = y; }
	
Complex operator*(int mult, const Complex& c) {
	return Complex(c.re * mult, c.im * mult);
}

Complex operator~(const Complex& c){
	return Complex(c.re, -c.im);
}

ostream& operator<<(ostream &out, const Complex &c) {
	out << '(' << c.getRe() << ", " << c.getIm() << "i)";
	return out;
}

istream& operator>>(istream &in, Complex &c) {
	double tmp;
	in >> tmp;
	in.get();
	c.setRe(tmp);

	in >> tmp;
	c.setIm(tmp);

	return in;
}