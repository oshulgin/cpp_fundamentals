#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

struct Review {
    std::string title;
	double price;
    int rating;
};

bool operator<(const shared_ptr<Review> r1, const shared_ptr<Review> r2);
bool worseThan(const shared_ptr<Review> r1, const shared_ptr<Review> r2);
bool cheaperThan(const shared_ptr<Review> r1, const shared_ptr<Review> r2);
bool FillReview(Review &rr);
void ShowReview(shared_ptr<Review> rr);

int main() {

    vector< shared_ptr<Review> > books;
	bool tmp = true;

	while ( tmp ) {		
		shared_ptr<Review> ptr(new Review);
		tmp = FillReview(*ptr);
		if ( !tmp ) break;
        books.push_back(ptr);
	}

	if (books.size() > 0) {
		int choice;
		cout << "Enter in what order do you want to see the list: " << "\n1. Sorted by name\n2. Sorted by title\n3. Sorted by price\n4. To quite" << endl;
		cin >> choice;
	
		switch(choice) {
			case 1: sort(books.begin(), books.end());
					cout << "Sorted by title:\nRating\tBook\n";
					for_each(books.begin(), books.end(), ShowReview);
					break;
			case 2: sort(books.begin(), books.end(), worseThan);
					cout << "Sorted by rating:\nRating\tBook\n";
					for_each(books.begin(), books.end(), ShowReview);
					break;
			case 3:	sort(books.begin(), books.end(), cheaperThan);
					cout << "Sorted by price:\nRating\tBook\n";
					for_each(books.begin(), books.end(), ShowReview);
					break;
			case 4: cout << "Bye!\n";
					break;
		} 
	} else {
		cout << "No entries. ";
		cout << "Bye.\n";
	}
	
	system("Pause");
    return 0;
}

bool operator<(const shared_ptr<Review> r1, const shared_ptr<Review> r2)
{
    if ((*r1).title < (*r2).title)
        return true;
    else if ((*r1).title == (*r2).title && (*r1).rating < (*r2).rating)
        return true;
    else
        return false;
}

bool worseThan(const shared_ptr<Review> r1, const shared_ptr<Review> r2)
{
    if ((*r1).rating < (*r2).rating)
        return true;
    else
        return false;
}

bool cheaperThan(const shared_ptr<Review> r1, const shared_ptr<Review> r2)
{
    if ((*r1).price < (*r2).price)
        return true;
    else
        return false;
}

bool FillReview(Review &rr)
{
    std::cout << "Enter book title (q to quit): ";
    std::getline(std::cin,rr.title);
    if (rr.title == "q")
        return false;

    std::cout << "Enter book rating: ";
    std::cin >> rr.rating;
    if (!std::cin)
        return false;

    std::cout << "Enter book price: ";
    std::cin >> rr.price;
    if (!std::cin)
        return false;
    
    while (std::cin.get() != '\n')
        continue;
    return true;
}


void ShowReview(shared_ptr<Review> rr)
{
	std::cout << (*rr).rating << "\t" << (*rr).title << "\t" << (*rr).price << std::endl;
}
