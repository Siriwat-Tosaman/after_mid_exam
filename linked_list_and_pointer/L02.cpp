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
            tail->next = p;
            tail = p;
        }
    }

    int x;
    cin >> x;

    Node *current = head;
    int ans = -1, position = 1;
    while (current != nullptr) {
        if (current -> data == x) {
            ans = position;
            break;
        }
        else {
            current = current  -> next;
            position++;
        }
    }

    cout << ans;

    while (head != nullptr) {
        Node *temp = head;
        head = head -> next;
        delete temp;
    }

    return 0;
}