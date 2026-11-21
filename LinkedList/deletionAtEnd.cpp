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

    // Deleting a node at end:
    Node *i = head;
    while (i->next->next != nullptr)
    {
        i = i->next;
    }

    Node* last = i->next;
    i->next=nullptr;
    delete last;

    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    return 0;
}