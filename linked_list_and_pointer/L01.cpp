#include <iostream>
using namespace std;

struct Node {
    int n;
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
            tail->next = p;
            tail = p;
        }
    }

    Node *current = head;
    while (current != nullptr) {
        cout << current -> n << " ";
        current = current -> next;
    }

    while (head != nullptr) {
        Node *temp = head;
        head = head -> next;
        delete temp;
    }

    return 0;
}