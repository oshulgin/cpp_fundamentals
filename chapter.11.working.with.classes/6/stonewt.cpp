#include <iostream>
using std::cout;
#include "stonewt.h"

// construct Stonewt object from double value
Stonewt::Stonewt(double lbs)
{
    stone = int (lbs) / Lbs_per_stn;    // integer division
    pds_left = int (lbs) % Lbs_per_stn + lbs - int(lbs);
    pounds = lbs;
	mode = LBS;
}

// construct Stonewt object from stone, double values
Stonewt::Stonewt(int stn, double lbs)
{
    stone = stn;
    pds_left = lbs;
    pounds =  stn * Lbs_per_stn +lbs;
	mode = STN;
}

Stonewt::Stonewt() { stone = pounds = pds_left = 0; }

Stonewt::~Stonewt() {}

Stonewt Stonewt::operator+ (const Stonewt & st) const {
	return Stonewt(pounds + st.pounds);
}

Stonewt Stonewt::operator- (const Stonewt & st) const {
	return Stonewt(pounds - st.pounds);
}

Stonewt Stonewt::operator* (double mult) const {
	return Stonewt(pounds * mult);
}

bool Stonewt::operator == (const Stonewt & st) const {
	return pounds == st.pounds;
}

bool Stonewt::operator != (const Stonewt & st) const {
	return !(*this == st);
}

bool Stonewt::operator >= (const Stonewt & st) const {
	return pounds >= st.pounds;
}

bool Stonewt::operator <= (const Stonewt & st) const {
	return pounds <= st.pounds;
}

bool Stonewt::operator > (const Stonewt & st) const {
	return pounds > st.pounds;
}

bool Stonewt::operator < (const Stonewt & st) const {
	return pounds < st.pounds;
}

double Stonewt::get_pounds() const {
	return pounds;
}
ostream& operator<<(ostream &out, const Stonewt &st) {
    if (st.mode == Stonewt::STN)
		out << st.stone << " stone, " << st.pds_left << " pounds";
    else if (st.mode == Stonewt::LBS)
    {
        out << st.pounds << " pounds";
    }

	return out;
}
