#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

class Linkedlist
{
private:
    Node *head;

public:
    Linkedlist()
    {
        head = nullptr;
    }

    void createLL(vector<int> v)
    {
        Node *temp = head;

        for (int i = 0; i < v.size(); i++)
        {
            Node *newnode = new Node{v[i], nullptr};

            if (head == nullptr)
            {
                head = newnode;
                temp = newnode;
            }
            else
            {
                temp->next = newnode;
                temp = newnode;
            }
        }
    }

    void display()
    {
        Node *temp = head;

        while (temp != nullptr)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }

        cout << endl;
    }

    int findMiddleNode(){
        Node* slow=head;
        Node* fast=head;

        while (fast!=nullptr&&fast->next!=nullptr)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow->data;
        
    }

    ~Linkedlist()
    {
        Node *temp;

        while (head != nullptr)
        {
            temp = head;
            head = head->next;
            delete temp;
        }
    }
};

int main()
{
    cout<<"enter the number of nodes in LL U want : "<<endl;
    int numberofNodes;
    cin >> numberofNodes;

    cout<<"enter the values for node :"<<endl;
    vector<int> data;
    int i;
    for (int j = 0; j < numberofNodes; j++)
    {
        cin >> i;
        data.push_back(i);
    }

    Linkedlist list;

    list.createLL(data);
    list.display();
    cout<<endl<<"middle of the LL is : "<<list.findMiddleNode();



    return 0;
}