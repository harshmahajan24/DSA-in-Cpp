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

    int count=0;
    Node* temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;

    }
    cout << "length of LL is: "<<count<<endl;
    return 0;
}