#ifndef QUEUE_H
#define QUEUE_H
#include <iostream>

using namespace std;

template <typename  Type>
class Queue {
private:
// class scope definitions
    // Node is a nested structure definition local to this class
    struct Node { Type item; struct Node * next;};
    enum {Q_SIZE = 10};

// private class members
    Node * front;       // pointer to front of Queue
    Node * rear;        // pointer to rear of Queue
    int items;          // current number of items in Queue
    const int qsize;    // maximum number of items in Queue

    // preemptive definitions to prevent public copying
    Queue(const Queue & q) : qsize(0) { }
    Queue & operator=(const Queue & q) { return *this;}

public:
	Queue(int qs = Q_SIZE) : qsize(qs), front(NULL), rear(NULL), items(0) {}; // create queue with a qs limit
    ~Queue();
    bool isempty() const;
    bool isfull() const;
    int queuecount() const;
    bool enqueue(const Type &item); // add item to end
    bool dequeue(Type &item);       // remove item from front
};

template <typename  Type>
Queue<typename  Type>::~Queue()
{
    Node * temp;
    while (front != NULL)   // while queue is not yet empty
    {
        temp = front;       // save address of front item
        front = front->next;// reset pointer to next item
        delete temp;        // delete former front
    }
}

template <typename  Type>
bool Queue<typename  Type>::isempty() const
{
    return items == 0;
}

template <typename  Type>
bool Queue<typename  Type>::isfull() const
{
    return items == qsize;
}

template <typename  Type>
int Queue<typename  Type>::queuecount() const
{
    return items;
}

template <typename  Type>
bool Queue<typename  Type>::enqueue(const Type & item)
{
    if (isfull())
        return false;
    Node * add = new Node;  // create node
    add->item = item;       // set node pointers
    add->next = NULL;       // or nullptr;
    items++;
    if (front == NULL)      // if queue is empty,
        front = add;        // place item at front
    else
        rear->next = add;   // else place at rear
    rear = add;             // have rear point to new node
    return true;
}

template <typename  Type>
bool Queue<typename  Type>::dequeue(Type & item)
{
    if (front == NULL)
        return false;
    item = front->item;     // set item to first item in queue
    items--;
    Node * temp = front;    // save location of first item
    front = front->next;    // reset front to next item
    delete temp;            // delete former first item
    if (items == 0)
        rear = NULL;
    return true;
}
#endif
