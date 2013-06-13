#include <iostream>
#include <cstring>
#include "workermi.h"
#include "queueTP.h"

const int SIZE = 5;

int main() {

   Worker * lolas[SIZE];

    int ct;
    for (ct = 0; ct < SIZE; ct++) {
        char choice;
        cout << "Enter the employee category:\n"
            << "w: waiter  s: singer  "
            << "t: singing waiter  q: quit\n";
        cin >> choice;
        while (strchr("wstq", choice) == NULL)
        {
            cout << "Please enter a w, s, t, or q: ";
            cin >> choice;
        }
        if (choice == 'q')
            break;
        switch(choice)
        {
            case 'w':   lolas[ct] = new Waiter;
                        break;
            case 's':   lolas[ct] = new Singer;
                        break;
            case 't':   lolas[ct] = new SingingWaiter;
                        break;
        }
        cin.get();
        lolas[ct]->Set();
    }

    cout << "\nHere is your staff:\n";
    int i;
    for (i = 0; i < ct; i++)
    {
        cout << endl;
        lolas[i]->Show();
    }
    for (i = 0; i < ct; i++)
        delete lolas[i];
	
	Queue<Worker *> work_queue(ct);

	if ( work_queue.isempty() ) {
		cout << "Queue is empty" << endl;
	} else {
		cout << "Queue is not empty" << endl;
	}
	
	for ( int i = 0; i < ct; i++ ) {
		work_queue.enqueue(lolas[i]);
	}

	cout << "After adding workers from stuff to queue size of queue is: " << work_queue.queuecount() << endl;

	system("Pause");
    return 0; 
}
