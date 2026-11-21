#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

int main()
{
    int specificIndex = 2;
    bool foundIndex = false;
    bool *p = &foundIndex;
    Node *first = new Node{10, nullptr};
    Node *second = new Node{20, nullptr};
    Node *third = new Node{30, nullptr};
    Node *fourth = new Node{40, nullptr};

    first->next = second;
    second->next = third;
    third->next = fourth;

    Node *head = first;

    // Deleting a node at specific psition:
    if (specificIndex < 0 || head == nullptr)
    {
        cout << "Invalid index or empty list" << endl;
    }
    else if (specificIndex == 0)
    {
        Node *td = head;
        head = head->next;
        delete td;

        foundIndex = true;
    }
    else
    {
        Node *temp = head;
        int i = 0;

        while (temp->next != nullptr && i < specificIndex - 1)
        {
            temp = temp->next;
            i++;
        }

        if (temp->next != nullptr)
        {
            Node *sp = temp->next;
            temp->next = sp->next;
            delete sp;

            foundIndex = true;
        }
    }

    if (foundIndex)
    {
        cout << "index found and node delted" << endl;
    }
    else
    {
        cout << "index not found and node cant be delted" << endl;
    }
    Node *temp1 = head;
    while (temp1 != NULL)
    {
        cout << temp1->data << " ";
        temp1 = temp1->next;
    }
    return 0;
}