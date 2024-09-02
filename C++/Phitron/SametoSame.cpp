#include <bits/stdc++.h>

using namespace std;

class Node {
public:
    int value;
    Node* next;

    Node(int val) {
        this->value = val;
        this->next = NULL;
    }
};

class SinglyLinkedList {
public:
    Node* head;

    SinglyLinkedList() : head(NULL) {}

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

    bool isIdentical(SinglyLinkedList& other) {
        Node* current1 = head;
        Node* current2 = other.head;

        while (current1 != NULL && current2 != NULL) {
            if (current1->value != current2->value) {
                return false;
            }
            current1 = current1->next;
            current2 = current2->next;
        }

        // Both should be NULL if they are identical
        return current1 == NULL && current2 == NULL;
    }
};

int main() {
    SinglyLinkedList list1;
    SinglyLinkedList list2;
    int value;

    // Reading first list
    while (cin >> value && value != -1) {
        list1.insert(value);
    }

    // Reading second list
    while (cin >> value && value != -1) {
        list2.insert(value);
    }

    if (list1.isIdentical(list2)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
