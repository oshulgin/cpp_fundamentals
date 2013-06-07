#include "list.h"


void show_items(const Item &item);

int main() {
	List my_list;
	customer c1 = { "Jilly Bean", 30 };
	customer c2 = { "Tom Jerry", 20 };
	customer c3 = { "Ron Don Don", 15 };

	cout << "Is empty: " << my_list.is_empty() << endl;
	my_list.add(c1);
	my_list.add(c2);
	cout << "Is empty: " << my_list.is_empty() << endl;
	my_list.add(c3);

	cout << "Now my list has " << my_list.size() << " arguments." << endl;
	
	my_list.visit(show_items);

	system("Pause");
	return 0;
}

void show_items(const Item &item) {
	cout << "Name: " << item.fullname << endl;
	cout << "Payment: " << item.payment<< endl;
}
//You can describe a simple list as follows:
//* The simple list can hold zero or more items of some particular type.
//* You can create an empty list.
//* You can add items to the list.
//* You can determine whether the list is empty .
//* You can determine whether the list is full.
//* You can visit each item in the list and perform some action on it.

//As you can see,this list really is simple; it doesn’t allow insertion or deletion,for example.
//Design a List class to represent this abstract type. You should provide a list.h
//header file with the class declaration and a list.cpp file with the class method
//implementations. You should also create a short program that utilizes your design.
//The main reason for keeping the list specification simple is to simplify this pro-
//gramming exercise.You can implement the list as an array or,if you’re familiar with
//the data type,as a linked list.But the public interface should not depend on your
//choice.That is,the public interface should not have array indices, pointers to nodes,
//and so on.It should be expressed in the general concepts of creating a list,adding
//an item to the list,and so on.

//The usual way to handle visiting each item and per-
//forming an action is to use a function that takes a function pointer as an argument:
//void visit(void (*pf)(Item &));
//Here pf points to a function (not a member function) that takes a reference to Item
//argument, where Item is the type for items in the list. The visit() function applies
//thisfunction toeachitem in thelist.You canusetheStackclassasageneralguide.