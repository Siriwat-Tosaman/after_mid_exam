#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
};

int main() {
    int number;
    long long k;
    cin >> number >> k;

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
            tail -> next = p;
            tail = p;
        }
    }
    k = k % number;
    if (k != 0) {
        int step = number - k - 1;
        Node *newtail = head;
        for (int i = 0; i < step; i++) {
            newtail = newtail -> next;
        }
        Node *newhead = newtail -> next;
        tail -> next = head;
        newtail -> next = nullptr;
        head = newhead;
        tail = newtail;
    }

    Node *current = head;
    while (current != nullptr) {
        cout << current -> data << " ";
        current = current -> next;
    }

    while (head != nullptr) {
        Node *temp = head;
        head = head -> next;
        delete temp;
    }

    return 0;
}