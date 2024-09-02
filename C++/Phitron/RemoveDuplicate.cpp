#include <bits/stdc++.h>

using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        this->data = value;
        this->next = NULL;
    }
};

class SinglyLinkedList {
public:
    Node* head;

    SinglyLinkedList() {
        head = NULL;
    }

    void insert(int value) {
        Node* newNode = new Node(value);
        if (head == NULL) {
            head = newNode;
        } else {
            Node* current = head;
            while (current->next != NULL) {
                current = current->next;
            }
            current->next = newNode;
        }
    }

    void removeDuplicates() {
        unordered_set<int> seen;
        Node* current = head;
        Node* prev = NULL;

        while (current != NULL) {
            if (seen.find(current->data) != seen.end()) {
                Node* temp = current;
                prev->next = current->next;
                current = current->next;
                delete temp;
            } else {
                seen.insert(current->data);
                prev = current;
                current = current->next;
            }
        }
    }

    void printList() {
        Node* current = head;
        while (current != NULL) {
            cout << current->data;
            if (current->next != NULL) {
                cout << " ";
            }
            current = current->next;
        }
        cout << endl;
    }

    ~SinglyLinkedList() {
        Node* current = head;
        while (current != NULL) {
            Node* next = current->next;
            delete current;
            current = next;
        }
        head = NULL;
    }
};

int main() {
    SinglyLinkedList list;
    int value;

    while (cin >> value && value != -1) {
        list.insert(value);
    }

    list.removeDuplicates();
    list.printList();

    return 0;
}
