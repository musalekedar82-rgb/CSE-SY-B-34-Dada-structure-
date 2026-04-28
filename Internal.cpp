#include <iostream>
using namespace std;

struct Node { int data; Node* next; } *head = NULL;

void insertEnd(int x) {
    Node *n = new Node{x, NULL}, *t = head;
    if (!head) head = n;
    else {
        while (t->next) t = t->next;
        t->next = n;
    }
}

int main() {
    insertEnd(10);
    insertEnd(20);
    insertEnd(30);
}
