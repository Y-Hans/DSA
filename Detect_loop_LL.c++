#include <iostream>
#include <vector>
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

    bool isLoop()
    {
        vector<Node*> visited;

        Node *current = head;

        while (current != NULL)
        {
            
            for (int i = 0; i < visited.size(); i++)
            {
                if (visited[i] == current)
                {
                    return true; // Loop detected
                }
            }

            
            visited.push_back(current);

            current = current->next;
        }

        return false;
    }

   
    void createLoop()
    {
        if (head == NULL)
            return;

        Node *temp = head;

        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = head->next;
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
    list.createLoop();
    if (list.isLoop())
    {
        cout << "Loop detected" << endl;
    }
    else
    {
        cout << "No loop detected" << endl;
    }
    return 0;
}