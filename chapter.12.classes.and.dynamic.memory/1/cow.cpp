#include "cow.h"

Cow::Cow() {
	name[0] = 0;
	hobby = new char[1];
	hobby[0] = 0;
	weight = 0;
}

Cow::Cow(const char * nm, const char * ho, double wt) {
	strcpy(name, nm);
	int len = strlen(ho);
	hobby = new char[len+1];

	strcpy(hobby, ho);
	weight = wt;
}

Cow::Cow(const Cow &c) {
	strcpy(name, c.name);
	int len = strlen(c.hobby);
	hobby = new char[len+1];

	strcpy(hobby, c.hobby);
	weight = c.weight;
}

Cow::~Cow() {
	delete [] hobby;
}

Cow & Cow::operator=(const Cow & c) {
	if ( this == &c ) {
		return *this;
	}
	delete [] hobby;
	strcpy(name, c.name);
	int len = strlen(c.hobby);
	hobby = new char[len+1];

	strcpy(hobby, c.hobby);
	weight = c.weight;
}

void Cow::ShowCow() const {
	cout << "Name: " << name << endl;
	cout << "Hobby: " << hobby << endl;
	cout << "Weight: " << weight << endl;
}