#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
};

int main() {
    int number;
    cin >> number;

    Node *head = nullptr;
    Node *tail = nullptr;

    for (int i = 0; i < number; i++) {
        int x;
        cin >> x;

        Node *p = new Node{x, nullptr};
        if (head == nullptr) {
            head = p;
            tail = p;
        }
        else {
            tail -> next =p;
            tail = p;
        }
    }

    int deNumber;
    cin >> deNumber;
    
    Node *before = nullptr;
    Node *current = head;
    while (current != nullptr && current -> data != deNumber) {
        before = current;
        current = current -> next;
    }

    if (current != nullptr) {
        if (before == nullptr) {
            head = current -> next;
        }
        else {
            before -> next = current -> next;
        }
        if (tail == current) {
            tail = before;
        }
        delete current;
    }

    Node *now = head;
    while (now != nullptr) {
        cout << now -> data << " ";
        now = now -> next;
    }

    while (head != nullptr) {
        Node *temp = head;
        head = head -> next;
        delete temp;
    }

    return 0;
}