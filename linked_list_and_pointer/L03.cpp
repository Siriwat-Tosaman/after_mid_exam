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

    for (int i = 0; i < number;i++) {
        int x;
        cin >> x;

        Node *p = new Node{x, nullptr};
        if (head == nullptr) {
            head = p;
            tail = p;
        }
        else {
            tail -> next = p;
            tail = p;
        }
    }

    int x, y;
    cin >> x >> y;

    Node *current = head;
    while (current != nullptr && current -> data != x) {
        current = current -> next;
    }

    if (current != nullptr) {
        Node *newnode = new Node{y, nullptr};
        newnode -> next = current -> next;
        current -> next = newnode;
        if (tail == current) {
            tail = newnode;
        }
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