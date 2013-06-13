#include "BadDude.h"
#include "gunslinger.h"
#include "person.h"
#include "pokerPlayer.h"

const int SIZE = 5;

int main() {
   Person * persons[SIZE];
   srand(time(0));

    int ct;
    for (ct = 0; ct < SIZE; ct++) {
        char choice;
        cout << "Enter the persons category:\n"
            << "p: pokerplayer  g: gunslinger  "
            << "b: badDude  q: quit\n";
        cin >> choice;
        while (strchr("pgbq", choice) == NULL)
        {
            cout << "Please enter a p, g, b, or q: ";
            cin >> choice;
        }
        if (choice == 'q')
            break;
        switch(choice)
        {
            case 'p':   persons[ct] = new PokerPlayer;
                        break;
            case 'g':   persons[ct] = new Gunslinger;
                        break;
            case 'b':   persons[ct] = new BadDude;
                        break;
        }
        cin.get();
        persons[ct]->set();
    }

    cout << "\nHere is your persons:\n";
    int i;
    for (i = 0; i < ct; i++)
    {
        cout << endl;
        persons[i]->show();
    }
	system("Pause");
	return 0;
}

//A Person class holds the first name and the last name of a person. In addition to
//its constructors, it has a how() method that displays both names. A Gunslingerclass
//derives virtually from the Personclass.It has a Draw()member that returns a type
//doublevalue representing a gunslinger’s draw time.The class also has an int mem-
//ber representing the number of notches on a gunslinger’s gun.Finally,it has a
//Show()function that displays all this information.
//APokerPlayerclass derives virtually from the Personclass.It has a Draw()mem-
//ber that returns a random number in the range 1 through 52,representing a card
//value.(Optionally,you could define a Cardclass with suit and face value members
//and use a Cardreturn value for Draw().) The PokerPlayerclass uses the Person
//show()function.The BadDudeclass derives publicly from the Gunslingerand
//PokerPlayerclasses.It has a Gdraw()member that returns a bad dude’s draw time
//and a Cdraw()member that returns the next card drawn.It has an appropriate
//Show()function.Define all these classes and methods,along with any other neces-
//sary methods (such as methods forsetting object values) and test them in a simple
//program similar to that in Listing 14.12.
