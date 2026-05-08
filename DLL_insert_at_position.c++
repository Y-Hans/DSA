#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int val) {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

class DoublyLinkedList {
private:
    Node* head;

public:
    DoublyLinkedList() {
        head = NULL;
    }

    void insertAtEnd(int val) {
        Node* newNode = new Node(val);

        if (head == NULL) {
            head = newNode;
            return;
        }

        Node* temp = head;

        while (temp->next != NULL) {
            temp = temp->next;
        }

        temp->next = newNode;
        newNode->prev = temp;
    }

    void insertAtPosition(int pos, int val) {

        Node* newNode = new Node(val);

        if (pos == 1) {

            newNode->next = head;

            if (head != NULL) {
                head->prev = newNode;
            }

            head = newNode;
            return;
        }

        Node* temp = head;

        for (int i = 1; i < pos - 1 && temp != NULL; i++) {
            temp = temp->next;
        }

        if (temp == NULL) {
            cout << "Invalid Position\n";
            return;
        }

        newNode->next = temp->next;
        newNode->prev = temp;
        
        if (temp->next != NULL) {
            temp->next->prev = newNode;
        }

        temp->next = newNode;
    }
    void display() {
        Node* temp = head;

        while (temp != NULL) {
            cout << temp->data << " <-> ";
            temp = temp->next;
        }

        cout << "NULL\n";
    }
};

int main() {

    DoublyLinkedList dll;

    dll.insertAtEnd(10);
    dll.insertAtEnd(20);
    dll.insertAtEnd(30);

    cout << "Original List:\n";
    dll.display();

    dll.insertAtPosition(2, 15);

    cout << "After Inserting 15 at Position 2:\n";
    dll.display();

    return 0;
}