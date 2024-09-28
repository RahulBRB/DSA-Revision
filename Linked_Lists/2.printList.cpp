#include <bits/stdc++.h>
using namespace std;

// NODE CLASS
class Node
{
public:
    int value;
    Node *next;

    Node(int value)
    {
        this->value = value;
        next = nullptr;
    }
};

// LINKEDLIST CLASS (CLASSES ARE BY DEFAULT PRIVATE)
class LinkedList
{
private:
    Node *head;
    Node *tail;
    int length;

public:
    // CONSTRUCTOR
    LinkedList(int value)
    {
        Node *newNode = new Node(value);
        head = newNode;
        tail = newNode;
        length = 1;
    }

    // PRINTLIST FUNCTION
    void printList()
    {
        Node *temp = head;
        while (temp != nullptr)
        {
            cout << temp->value << " ";
            temp = temp->next;
            // move to the next node
        }
    }

    void getHead()
    {
        cout << head->value << endl;
    }

    void getTail()
    {
        cout << tail->value << endl;
    }

    void getLength()
    {
        cout << length << endl;
    }
};


int main(){
    LinkedList* myLinkedList = new LinkedList(4);

    myLinkedList->getHead();
    myLinkedList->getTail();
    myLinkedList->getLength();

    myLinkedList->printList();
}
