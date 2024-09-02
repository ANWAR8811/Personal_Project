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

    int findIndex(int x) {
        Node* current = head;
        int index = 0;

        while (current != NULL) {
            if (current->value == x) {
                return index;
            }
            current = current->next;
            index++;
        }

        return -1;
    }
};

int main() {
    int t;
    cin >> t;
    cin.ignore(); // To ignore the newline after the number of test cases

    while (t--) {
        SinglyLinkedList list;
        string line;
        
        // Read the linked list values
        getline(cin, line);
        istringstream iss(line);
        int value;
        
        while (iss >> value && value != -1) {
            list.insert(value);
        }

        // Read the value to be searched
        int x;
        cin >> x;
        cin.ignore(); // To ignore the newline after the value

        cout << list.findIndex(x) << endl;
    }

    return 0;
}
