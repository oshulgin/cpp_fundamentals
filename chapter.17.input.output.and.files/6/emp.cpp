#include "emp.h"

// abstr_emp class defenition
abstr_emp::abstr_emp() {
	fname = "";
	lname = "";
	job = "";
}

abstr_emp::abstr_emp(const string & fn, const string & ln, const string & j) : fname(fn), lname(ln), job(j) { }

void abstr_emp::ShowAll() const {
	cout << "First name: " << fname << endl;
	cout << "Last name: " << lname << endl;
	cout << "Job: " << job << endl;
}

void abstr_emp::SetAll() {
	cout << "Enter yor first name: ";
	cin >> fname;
	cout << "Enter yor last name: ";
	cin >> lname;
	cout << "Enter yor job: ";
	cin >> job;
}

void abstr_emp::writeall(ofstream& out) const {
	out << "First name: " << fname << endl;
	out << "Last name: " << lname << endl;
	out << "Job: " << job << endl;
}

abstr_emp::~abstr_emp() {}

ostream & operator<<(ostream & os, const abstr_emp & e) {
	os << e.fname << ", " << e.lname;
	return os;
}


// employee class defenition
employee::employee() : abstr_emp() { }

employee::employee(const string & fn, const string & ln, const string & j) : abstr_emp(fn, ln, j) {}

void employee::ShowAll() const { abstr_emp::ShowAll(); }

void employee::SetAll() { abstr_emp::SetAll(); }


// manager class defenition
manager::manager() : abstr_emp() { inchargeof = 0; }

manager::manager(const string & fn, const string & ln, const string & j, int ico) : abstr_emp(fn, ln, j), inchargeof(ico) { }

manager::manager(const abstr_emp & e, int ico) : abstr_emp(e), inchargeof(ico) { }

manager::manager(const manager & m) : abstr_emp(m), inchargeof(m.inchargeof){ }

void manager::ShowAll() const {
	abstr_emp::ShowAll();
	cout << "In charge of: " << inchargeof << endl;
}

void manager::writeall(ofstream& out) const {
	abstr_emp::writeall(out);
	out << "In charge of: " << inchargeof << endl;
}

void manager::SetAll() {
	abstr_emp::SetAll();
	cout << "Enter a number of employee managed: ";
	cin >> inchargeof;
}


// fink class defenition
fink::fink() : abstr_emp() { reportsto = ""; }

fink::fink(const string & fn, const string & ln, const string & j, const string & rpo) : abstr_emp(fn, ln, j), reportsto(rpo) { }

fink::fink(const abstr_emp & e, const string & rpo) : abstr_emp(e), reportsto(rpo) { }

fink::fink(const fink & e) : abstr_emp(e), reportsto(e.reportsto) { }

void fink::ShowAll() const {
	abstr_emp::ShowAll();
	cout << "Reports to: " << reportsto << endl;
}

void fink::writeall(ofstream& out) const {
	abstr_emp::writeall(out);
	out << "Reports to: " << reportsto << endl;
}

void fink::SetAll() {
	abstr_emp::SetAll();
	cout << "Enter whom to report: ";
	cin >> reportsto;
}


// highfink class defenition
highfink::highfink() : abstr_emp(), fink(), manager() { }

highfink::highfink(const string & fn, const string & ln, const string & j, const string & rpo, int ico) : abstr_emp(fn, ln, j) {
	InChargeOf() = ico;
	ReportsTo() = rpo;
}

highfink::highfink(const abstr_emp & e, const string & rpo, int ico) : abstr_emp(e) {
	InChargeOf() = ico;
	ReportsTo() = rpo;
}

highfink::highfink(const fink & f, int ico) : fink(f), manager(f, ico) { }

highfink::highfink(const manager & m, const string & rpo) : manager(m), fink(m, rpo) { }

highfink::highfink(const highfink & h) : abstr_emp(h), manager(h), fink(h) { }

void highfink::ShowAll() const {
	abstr_emp::ShowAll();
	cout << "Reports to: " << fink::ReportsTo() << endl;
	cout << "In charge of: " << manager::InChargeOf() << endl;
}

void highfink::writeall(ofstream& out) const {
	abstr_emp::writeall(out);
	out << "Reports to: " << fink::ReportsTo() << endl;
	out << "In charge of: " << manager::InChargeOf() << endl;
}

void highfink::SetAll() {
	abstr_emp::SetAll();

	cout << "Enter whom to report: ";
	cin >> ReportsTo();

	cout << "Enter a number of employee managed: ";
	cin >> InChargeOf();
}

