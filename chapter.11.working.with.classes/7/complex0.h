#ifndef COMPLEX0_H
#define COMPLEX0_H

#include <iostream>
using namespace std;

class Complex {
private:
	double re;
	double im;

public:
	Complex();
	Complex(double x, double y);

	Complex operator+(const Complex& c) const;
	Complex operator-(const Complex& c) const;
	Complex operator*(const Complex& c) const;

	double getRe() const;
	double getIm() const;

	void setRe(double x);
	void setIm(double y);

	friend Complex operator*(int mult, const Complex& c);
	friend Complex operator~(const Complex& c);
};

ostream& operator<<(ostream &out, const Complex &c);

istream& operator>>(istream &in, Complex &c);
#endif