#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

int main()
{
    int target = 0;
    bool targetFound=false;
    Node *first = new Node{10, nullptr};
    Node *second = new Node{20, nullptr};
    Node *third = new Node{30, nullptr};
    Node *fourth = new Node{40, nullptr};

    first->next = second;
    second->next = third;
    third->next = fourth;

    Node* head = first;

    int count=1;
    Node* temp = head;
    while (temp != NULL)
    {
        if(temp->data==target) {
            targetFound=true;
            break;
        }
        temp = temp->next;
        count++;

    }
    if(targetFound){
        cout<<"target found at node: "<<count<<endl;
    }
    else{
            cout << "target not present in LL"<<endl;

    }
    return 0;
}