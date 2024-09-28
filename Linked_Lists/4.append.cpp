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

    // DESTRUCTOR
    ~LinkedList(){
        Node* temp = head;
        while(head){
            head=head->next;
            delete temp;
            temp=head;
        }
    }

    // APPEND FUNCTION
    void append(int value){
        Node* newNode = new Node(value);
        if(length==0){
            tail=newNode;
            head=newNode;
        }else{
            tail=tail->next;
            tail=newNode;
        }
        length++;
    }
};

int main(){
    LinkedList* myLinkedList = new LinkedList(4);

    myLinkedList->append(10);
    myLinkedList->printList();
}
