#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
};

int main() {
    Node *a = new Node{10, nullptr};
    Node *b = new Node{20, nullptr};
    Node *c = new Node{30, nullptr};

    a -> next = b;
    b -> next = c;

    Node *head = a;
    //ชื่อของ head จะตั้งชื่อว่าอะไรก็ได้
    return 0;
}