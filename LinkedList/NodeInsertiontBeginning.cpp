#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

int main()
{

    Node *first = new Node{10, nullptr};
    Node *second = new Node{20, nullptr};
    Node *third = new Node{30, nullptr};
    Node *fourth = new Node{40, nullptr};

    first->next = second;
    second->next = third;
    third->next = fourth;

    Node* head = first;

    //Inserting a node at beginnig:
    Node* newNode = new Node{5,nullptr};// created new node
    newNode->next= head;


    while (temp != NULL)
    {
        cout << temp->data<<" ";
        temp = temp->next;

    }
    return 0;
}