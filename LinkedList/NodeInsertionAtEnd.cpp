#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
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

    Node *head = first;

    // Inserting a node at end:
    Node *newNode = new Node{50, nullptr}; // created new node

    Node* temp = first;
    while (temp != nullptr)
    {
        if (temp->next == nullptr)
        {
            temp->next = newNode;
            break;
        }
        temp = temp->next;
    }

    Node *temp1 = first;
    while (temp1 != NULL)
    {
        cout << temp1->data<<" ";
        temp1 = temp1->next;

    }
    return 0;
}