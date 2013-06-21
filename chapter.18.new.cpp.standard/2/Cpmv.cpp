#include "Cpmv.h"

Cpmv::Cpmv() {
	pi = new Info;
	pi->qcode = "QCode";
	pi->zcode = "ZCode";
	cout << "Default constructor" << endl;
}

Cpmv::Cpmv(std::string q, std::string z) {
	pi = new Info;
	pi->qcode = q;
	pi->zcode = z;
	cout << "Constructor with parameters" << endl;
}

Cpmv::Cpmv(const Cpmv & cp) {
	pi = new Info;
	pi->qcode = cp.pi->qcode;
	pi->zcode = cp.pi->zcode;
	cout << "Copy constructor" << endl;
}

Cpmv::Cpmv(Cpmv && mv) {
	pi = mv.pi;
	mv.pi = NULL;
	cout << "Move constructor" << endl;
}

Cpmv::~Cpmv() {
	delete pi;
}

Cpmv & Cpmv::operator=(const Cpmv & cp) {
	if (this == &cp) { return *this; }
	delete pi;
	pi = new Info;
	pi->qcode = cp.pi->qcode;
	pi->zcode = cp.pi->zcode;
	cout << "Assignment operator" << endl;
	return *this;
}

Cpmv & Cpmv::operator=(Cpmv && mv) {
	if (this == &mv) { return *this; }
	delete pi;
	pi = mv.pi;
	mv.pi = NULL;
	cout << "Move assignment operator" << endl;
	return *this;
}

Cpmv Cpmv::operator+(const Cpmv & obj) const {
	Cpmv temp(*this);
	temp.pi->qcode += obj.pi->qcode;
	temp.pi->zcode += obj.pi->zcode;
	cout << "Operator+()" << endl;
	return temp;
}

void Cpmv::Display() const {
	cout << "qcode: " << (pi->qcode) << endl;
	cout << "zcode: " << (pi->zcode) << endl;
}