#include "vintagePort.h"

	char * nickname; // i.e., "The Noble" or "Old Velvet", etc.
	int year; // vintage year

VintagePort::VintagePort() : Port() {
	nickname = new char[strlen("none") + 1];
	strcpy(nickname, "none");
	year = 9999;
}

VintagePort::VintagePort(const char * br, int b, const char * nn, int y) : Port(br, "vintage", b) {
	nickname = new char[strlen(nn) + 1];
	strcpy(nickname, nn);
	year = y;
}

VintagePort::VintagePort(const VintagePort & vp) : Port(vp) {
	nickname = new char[strlen(vp.nickname) + 1];
	strcpy(nickname, vp.nickname);
	year = vp.year;	
}

VintagePort & VintagePort::operator=(const VintagePort & vp) {
	Port::operator=(vp);
	delete [] nickname;
	nickname = new char[strlen(vp.nickname) + 1];
	strcpy(nickname, vp.nickname);
	year = vp.year;
	return *this;
}
 
void VintagePort::Show() const {
	Port::Show();
	cout << "NickName: " << nickname << endl;
	cout << "Year: " << year << endl;
}

ostream & operator<<(ostream & os, const VintagePort & vp) {
	os << (const Port& )vp << ", " << vp.nickname << ", " << vp.year;
	return os;
}