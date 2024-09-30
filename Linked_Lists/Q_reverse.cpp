// Reverse singly Linked List

#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node(int value): data(value), next(NULL){}
};

// Function to reverse the linked list
Node* reverse(Node* head){
    Node* prev = NULL; //Previous node starts as NULL
    Node* curr = head; //Current node starts as head

    //Loop until we reach the end of the list
    while(curr!=NULL){
        Node* next = curr->next;  //Store the next node
        curr->next = prev;        //Reverse the link

        //prev / curr / next
        prev=curr;
        curr=next;
    }

    return prev;
}
