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

// implement queue using linked list
node* enqueue(node *head, int data) {
    node *temp = new_node(data);
    if(head == NULL) {
        head = temp;
        return head;
    }
    node *curr = head;
    while(curr->next != NULL) {
        curr = curr->next;
    }
    curr->next = temp;
    return head;
}

node* dequeue(node *head) {
    if(head == NULL) {
        cout << "Queue Underflow" << endl;
        return NULL;
    }
    node *temp = head;
    head = head->next;
    delete temp;
    return head;
}

int Front(node *head) {
    if(head == NULL) {
        cout << "Queue is empty" << endl;
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
    head = enqueue(head, 2);
    head = enqueue(head, 5);
    head = enqueue(head, 10);
    head = enqueue(head, 12);
    cout << Front(head) << endl;
    head = dequeue(head);
    cout << Front(head) << endl;
    head = dequeue(head);
    cout << Front(head) << endl;
    head = dequeue(head);
    cout << Front(head) << endl;
    head = dequeue(head);
    cout << Front(head) << endl;
}