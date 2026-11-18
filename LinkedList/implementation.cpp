#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

int main()
{
    // Node* head = first;
    Node *first = new Node();
    Node *second = new Node();
    Node *third = new Node();
    Node *fourth = new Node();

    first->data = 10;
    first->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = fourth;

    fourth->data = 40;
    fourth->next = NULL;//for singly linked list
    // fourth->next = first; //for cicular linked list

    Node *temp = first;

    while (temp != NULL)
    {
        cout << temp->data<<" ";
        // if(temp->next==first) break; for traversal in circular LL

        temp = temp->next;

    }

    return 0;
}