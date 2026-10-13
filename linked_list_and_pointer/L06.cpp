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
            tail -> next = p;
            tail = p;
        }
    }

    Node *fast = head;
    Node *slow = head;

    while (fast != nullptr && fast -> next != nullptr) {
        slow = slow -> next;
        fast = fast -> next -> next;
    }

    cout << slow -> data;

    while (head != nullptr) {
        Node *temp = head;
        head = head -> next;
        delete temp;
    }

    return 0;
}