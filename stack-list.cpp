#include <bits/stdc++.h>
using namespace std;

struct node {
    int data;
    node *next;
};

node* new_node(int data) {
    node *temp = new node;
    temp->data = data;
    temp->next = NULL;
    return temp;
}

node* push(node *head, int data) {
    node *temp = new_node(data);
    temp->next = head;
    head = temp;
    return head;
}

node* pop(node *head) {
    if(head == NULL) {
        cout << "Stack Underflow" << endl;
        return NULL;
    }
    node *temp = head;
    head = head->next;
    delete temp;
    return head;
}

int Top(node *head) {
    if(head == NULL) {
        cout << "Stack is empty" << endl;
        return -1;
    }
    return head->data;
}

bool empty(node *head) {
    return (head == NULL);
}

void print(node *head) {
    while(head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
}

int main()
{
    node *head = NULL;
    head = push(head, 2);
    head = push(head, 5);
    head = push(head, 10);
    head = push(head, 12);
    cout << Top(head) << endl;
    head = pop(head);
    cout << Top(head) << endl;
    head = pop(head);
    cout << Top(head) << endl;
    head = pop(head);
    cout << Top(head) << endl;
    head = pop(head);
    cout << Top(head) << endl;
    head = pop(head);
    cout << empty(head) << endl;
    return 0;
}
