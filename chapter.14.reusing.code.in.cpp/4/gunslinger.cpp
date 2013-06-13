#include"gunslinger.h"

Gunslinger::Gunslinger() {
	f_name = "none";
	s_name = "s_name";
	draw_time = 0;
	notches_number = 0;
}

Gunslinger::Gunslinger(const Person& person, double time, int notches_n) : Person(person), draw_time(time), notches_number(notches_n) {}

Gunslinger::Gunslinger(const char* f_name, const char* s_name, double time, int notches_n) : Person(f_name, s_name), draw_time(time), notches_number(notches_n) {}

void Gunslinger::show() const {
	Person::show();
	cout << "Draw time: " << draw_time << endl;
	cout << "Notches number: " << notches_number << endl;
}

double Gunslinger::draw() const { return draw_time; }

int Gunslinger::get_notches() const { return notches_number; }

void Gunslinger::set_draw_time(double time) { draw_time = time; }

void Gunslinger::set_notches(int n) { notches_number = n; }

void Gunslinger::set() {
	Person::set();
	cout << "Please enter draw time: ";
	cin >> draw_time;
	cout << "Please enter number of notches: ";
	cin >> notches_number;
}