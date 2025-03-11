#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
    /*
        ---------------     ---------------
        | data | next |---> | data | next |
        ---------------     ---------------
    */
    int data;
    Node* next; // cz it points to the next node;

    //constructor
    Node ( int data ){
        // declaring empty node
        this -> data = data;
        this -> next = NULL; // only one Node
    }
};

void insertAtHead ( Node* &head, int d){
    Node* temp = new Node(d);
    temp->next = head; // pointed to previous node
    head = temp; // set head to the new node;
}

void print( Node* &head){
    Node* temp = head;

    while( temp != NULL){
        cout<< temp->data <<" ";
        temp = temp->next; // temp++
    }
    cout<<endl;
}


int main()
{
    // created new node
    Node* node1 = new Node(10); //created new node
    cout<< node1->data <<endl; 
    cout<< node1->next <<endl; // [ 10 | NULL ]

    // head printed to node1;
    Node* head = node1;
    print(head);

    insertAtHead(head, 12);
    print(head); // [ 12 | 10(address of next node) ]-->[ 10 | NULL ]

    return 0;
}