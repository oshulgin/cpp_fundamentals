#ifndef STONEWT_H_
#define STONEWT_H_
using namespace std;

class Stonewt {
public:
	enum Mode {STN, LBS};
private:
    enum {Lbs_per_stn = 14};      // pounds per stone
    int stone;                    // whole stones
    double pds_left;              // fractional pounds
    double pounds;                // entire weight in pounds
	Mode mode;
public:
    Stonewt(double lbs);          // constructor for double pounds
    Stonewt(int stn, double lbs); // constructor for stone, lbs
    Stonewt();                    // default constructor
    ~Stonewt();

	Stonewt operator+(const Stonewt & st) const;
	Stonewt operator-(const Stonewt & st) const;
	Stonewt operator*(double mult) const;

	friend ostream& operator<<(ostream &out, const Stonewt &st);
};



#endif
