#include <iostream>
#include <cstdlib> // for rand() and srand()
#include <ctime>   // for time()
#include "queue.h"

const int MIN_PER_HR = 60;

bool newcustomer(double x); // is there a new customer?

int main()
{
    srand(time(0));    //  random initializing of rand()

    cout << "Case Study: Bank of Heather Automatic Teller\n";
    cout << "Enter maximum size of queue: ";
    int qs;
    cin >> qs;
    Queue line(qs);         // line queue holds up to qs people

    cout << "Enter the number of simulation hours: ";
    int hours;              //  hours of simulation
    cin >> hours;
    // simulation will run 1 cycle per minute
	cout << "This operation can take few minutes..." << endl;
    long cyclelimit = MIN_PER_HR * hours; // # of cycles
	double min_per_cust;    //  average time between arrivals
	double perhour;
    long turnaways;     //  turned away by full queue
    long customers;     //  joined the queue
    long served;        //  served during the simulation
    long sum_line;      //  cumulative line length
    int wait_time;      //  time until autoteller is free
    long line_wait;     //  cumulative time in line
	double average_wait_time = 0;

	do {
		perhour = rand() % 60 + 1;
		min_per_cust = MIN_PER_HR / perhour;
		Item temp;              //  new customer data
		turnaways = 0;
		customers = 0;
		served = 0;
		sum_line = 0;
		wait_time = 0;
		line_wait = 0;

		for (int cycle = 0; cycle < cyclelimit; cycle++)
		{
			if (newcustomer(min_per_cust))  // have newcomer
			{
				if (line.isfull())
					turnaways++;
				else
				{
					customers++;
					temp.set(cycle);    // cycle = time of arrival
					line.enqueue(temp); // add newcomer to line
				}
			}
			if (wait_time <= 0 && !line.isempty())
			{
				line.dequeue (temp);      // attend next customer
				wait_time = temp.ptime(); // for wait_time minutes
				line_wait += cycle - temp.when();
				served++;
			}
			if (wait_time > 0)
				wait_time--;
			sum_line += line.queuecount();
		}
		average_wait_time = (double)line_wait / served;
	//} while (average_wait_time != 1.0);
	} while ( !(average_wait_time <= 1.05 && average_wait_time >= 0.95) );
// reporting results
    if (customers > 0)
    {
		cout << "customers per hour: " << perhour << endl;
        cout << "customers accepted: " << customers << endl;
        cout << "  customers served: " << served << endl;
        cout << "         turnaways: " << turnaways << endl;
        cout << "average queue size: ";
        cout.precision(2);
        cout.setf(ios_base::fixed, ios_base::floatfield);
        cout << (double) sum_line / cyclelimit << endl;
        cout << " average wait time: "
             << (double) average_wait_time << " minute\n";
    }
    else
        cout << "No customers!\n";
    cout << "Done!\n";

    system("PAuse");
    return 0;
}

//  x = average time, in minutes, between customers
//  return value is true if customer shows up this minute
bool newcustomer(double x)
{
    return (rand() * x / RAND_MAX < 1); 
}


//The Bank of Heather has performed a study showing that ATM customers won’t
//wait more than one minute in line.Using the simulation from Listing 12.10,find a
//value for number of customers per hour that leads to an average wait time of one
//minute.(Use at least a 100-hour trial period.)