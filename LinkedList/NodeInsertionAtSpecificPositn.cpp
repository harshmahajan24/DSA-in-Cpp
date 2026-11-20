#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

int main()
{
    int specificIndex = 0;

    Node *first = new Node{10, nullptr};
    Node *second = new Node{20, nullptr};
    Node *third = new Node{30, nullptr};
    Node *fourth = new Node{40, nullptr};

    first->next = second;
    second->next = third;
    third->next = fourth;

    Node *head = first;

    // Inserting a node at specific postion:
    Node *newNode = new Node{25, nullptr}; // created new node

    Node *temp = first;
    int i = 0;
    if (specificIndex == 0)
    {
        newNode->next = head;
        head = newNode;
    }
    else
    {
        Node *temp = head;
        int i = 0;

        while (temp != nullptr && i < specificIndex - 1)
        {
            temp = temp->next;
            i++;
        }

        if (temp != nullptr)
        {
            newNode->next = temp->next;
            temp->next = newNode;
        }
    }

    Node *temp1 = head;
    while (temp1 != NULL)
    {
        cout << temp1->data << " ";
        temp1 = temp1->next;
    }
    return 0;
}