/*
LL: Constructor
Write the constructor for the LinkedList class that initializes a singly linked list with a single node containing an integer value.
The LinkedList constructor takes an integer value as a parameter and performs the following tasks:
Create a new Node object with the given value and store its address in a Node* newNode pointer.
Set the head pointer to the address of the new node.
Set the tail pointer to the address of the new node.
Set the length to 1.
*/

#include <bits/stdc++.h>
using namespace std;

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

class LinkedList
{
private:
    Node *head;
    Node *tail;
    int length;

public:
    LinkedList(int value)
    {
        Node *newNode = new Node(value);
        head = newNode;
        tail = newNode;
        length = 1;
    }
};
