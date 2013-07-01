#include <iostream>
#include <cstring>
#include "workermi.h"
#include "queueTP.h"

const int SIZE = 5;

int main() {
    Queue<Worker *> work_queue;
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
		Worker *w;
        switch(choice)
        {
            case 'w':   w = new Waiter;
						work_queue.enqueue(w);
                        break;
            case 's':   w = new Singer;
						work_queue.enqueue(w);
                        break;
            case 't':   w = new SingingWaiter;
						work_queue.enqueue(w);
                        break;
        }
        cin.get();
        w->Set();
    }

	cout << work_queue.queuecount() << endl;
	for ( int i =  work_queue.queuecount(); i > 0; i-- ) {
		Worker *tmp;
		work_queue.dequeue(tmp);
		tmp->Show();
		cout << endl;
		delete tmp;
	}

	system("Pause");
    return 0; 
}
