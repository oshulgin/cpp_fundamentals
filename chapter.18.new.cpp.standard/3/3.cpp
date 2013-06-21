#include <iostream>
#include <string>
// definition for 0 parameters -- terminating call
long double sum_values() {
    return 0;
}

// definition for 1 or more parameters
template<typename T, typename... Args>
long double sum_values( T value, Args... args)
{
    T sum = 0;
    return value + sum_values(args...);
}

int main()
{
    int n = 14;
    double x = 2.71828;
    std::cout << "Sum1: "<< sum_values(1, 2) << std::endl;
    std::cout << "Sum2: "<<  sum_values(x*x, 30.2, 7);

    std::cin.get();
    return 0;
}
//Write and test a variadic template function sum_values() that accepts an arbitrar-
//ily long list of arguments with numeric values (they can be a mixture of types) and
//returns the sum as a long double value.
