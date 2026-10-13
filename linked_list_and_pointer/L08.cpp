#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
};

int main() {
    int numberA, numberB;
    cin >> numberA >> numberB;

    Node *headA = nullptr;
    Node *tailA = nullptr;
    Node *headB = nullptr;
    Node *tailB = nullptr;

    for (int i = 0; i < numberA; i++) {
        int x;
        cin >> x;
        Node *p = new Node{x, nullptr};
        if (headA == nullptr) {
            headA = p;
            tailA = p;
        }
        else {
            tailA -> next = p;
            tailA = p;
        }
    }

    for (int i = 0; i < numberB; i++) {
        int x;
        cin >> x;
        Node *p = new Node{x, nullptr};
        if (headB == nullptr) {
            headB = p;
            tailB = p;
        }
        else {
            tailB -> next = p;
            tailB = p;
        }
    }

    Node *head = nullptr;
    Node *tail = nullptr;
    while (headA != nullptr && headB != nullptr) {
        Node *selected;
        if (headA -> data <= headB -> data) {
            selected = headA;
            headA = headA -> next;
        }
        else {
            selected = headB;
            headB = headB -> next;
        }
        selected->next = nullptr;
        if (head == nullptr) {
            head = selected;
            tail = selected;
        } else {
            tail -> next = selected;
            tail = selected;
        }

    }
    if (headA != nullptr) {
        tail->next = headA;
    }
    if (headB != nullptr) {
        tail->next = headB;
    }
    

    Node *current = head;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    while (head != nullptr) {
        Node *temp = head;
        head = head -> next;
        delete temp;
    }

    return 0;
}