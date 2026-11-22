#include <bits/stdc++.h>
using namespace std;

// Node class
class Node
{
public:
    int data;
    Node* next;

    Node(int value)
    {
        data = value;
        next = nullptr;
    }
};

// LinkedList class
class LinkedList
{
private:
    Node* head;

public:

    // Constructor
    LinkedList()
    {
        head = nullptr;
    }

    // Insert at end
    void insertAtEnd(int value)
    {
        Node* newNode = new Node(value);

        if (head == nullptr)
        {
            head = newNode;
            return;
        }

        Node* temp = head;

        while (temp->next != nullptr)
        {
            temp = temp->next;
        }

        temp->next = newNode;
    }

    // Display linked list
    void display()
    {
        Node* temp = head;

        while (temp != nullptr)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }

        cout << endl;
    }

    // Destructor
    ~LinkedList()
    {
        Node* temp;

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
    LinkedList list;

    list.insertAtEnd(10);
    list.insertAtEnd(20);
    list.insertAtEnd(30);
    list.insertAtEnd(40);

    list.display();

    return 0;
}