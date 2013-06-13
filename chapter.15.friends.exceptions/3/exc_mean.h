// exc_mean.h  -- exception classes for hmean(), gmean()
#include <iostream>
#include <stdexcept>

class base_bad : public std::logic_error {
public:
	double x;
	double y;

	base_bad(double x, double y) : std::logic_error(""), x(x), y(y) {}

	virtual void what_problem() {
		std::cout <<  "arguments " << x << ", " << y << " are incorrect./n";
	}

};

class bad_hmean : public base_bad {
public:
	bad_hmean(double x, double y) : base_bad(x, y) {}
	void what_problem() {
		std::cout << "For function hmean ";
		base_bad::what_problem();
	}
};

class bad_gmean : public base_bad {
public:
	bad_gmean(double x, double y) : base_bad(x, y) {}
	void what_problem() {
		std::cout << "For function gmean ";
		base_bad::what_problem();
	}
};
