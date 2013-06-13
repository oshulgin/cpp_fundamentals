// exc_mean.h  -- exception classes for hmean(), gmean()
#include <iostream>
#include <stdexcept>

class bad_hmean : public std::logic_error {
public:
	bad_hmean() : std::logic_error("Bad arguments for hmean") {}
};

class bad_gmean : public std::logic_error {
public:
	bad_gmean() : std::logic_error("Bad arguments for gmean") {}
};
