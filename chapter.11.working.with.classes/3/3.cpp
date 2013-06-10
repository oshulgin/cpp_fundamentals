#include <iostream>
#include <cstdlib>   
#include <ctime>        
#include "vect.h"

using namespace std;
using namespace VECTOR;

int main() {
    srand(time(0));  
    double direction;
    Vector step;
    Vector result(0.0, 0.0);
    unsigned long steps = 0;
    double target;
    double dstep;
	int number_of_trials;



    cout << "Enter target distance (q to quit): ";
    while (cin >> target)
    {
        cout << "Enter step length: ";
        if (!(cin >> dstep))
            break;

		cout << "Enter a number of trials: ";
		cin >> number_of_trials;
		unsigned long min_steps = 1000000;
		unsigned long max_steps = 0;
		unsigned long averege_steps = 0;
		unsigned long sum = 0;

		for ( int i = 0; i < number_of_trials; i++ ) {
			while (result.magval() < target)
			{
				direction = rand() % 360;
				step.reset(dstep, direction, Vector::POL);
				result = result + step;
				steps++;
			}
			sum += steps;
			if ( min_steps > steps ) { min_steps = steps; }
			if ( max_steps < steps ) { max_steps = steps; }
			steps = 0;
			result.reset(0.0, 0.0);
			//cout << "Enter target distance (q to quit): ";
		}
		cout << "Min steps: " << min_steps << endl;
		cout << "Max steps: " << max_steps << endl;
		cout << "Average number of steps: " << sum / number_of_trials << endl;
		cout << "Enter target distance (q to quit): ";
    }

    cout << "Bye!\n";

	system("Pause");
    return 0; 
}

//Modify Listing 11.15 so that instead of reporting the results of a single trial for a
//particular target/step combination,it reports the highest, lowest, and average num-
//ber of steps for N trials,where N is an integer entered by the user.