#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

class LinkedList
{
private:
    Node *head;

public:
    LinkedList()
    {
        head = NULL;
    }

    void insertAtBeginning(int val)
    {
        Node *newNode = new Node(val);
        newNode->next = head;
        head = newNode;
    }

    void insertAtEnd(int val)
    {
        Node *newNode = new Node(val);

        if (head == NULL)
        {
            head = newNode;
            return;
        }

        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newNode;
    }

    void deleteNode(int key)
    {
        Node *temp = head;
        Node *prev = NULL;

        if (temp != NULL && temp->data == key)
        {
            head = temp->next;
            delete temp;
            return;
        }

        while (temp != NULL && temp->data != key)
        {
            prev = temp;
            temp = temp->next;
        }

        if (temp == NULL)
        {
            cout << "Value not found\n";
            return;
        }

        prev->next = temp->next;
        delete temp;
    }

    void display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
    void length()
    {
        if (head == NULL)
        {
            cout << "Length = 0" << endl;
        }
    }
};

int main()
{
    LinkedList list;

    list.insertAtBeginning(10);
    list.insertAtBeginning(5);
    list.insertAtEnd(20);
    list.insertAtEnd(30);

    list.display();

    list.deleteNode(10);
    list.display();

    return 0;
}