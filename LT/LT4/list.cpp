#include <bits/stdc++.h>
using namespace std;


struct Node {
    int val;
    struct Node* next;
};

Node* createNode(int data) {
    Node* node = new Node();
    if(node == NULL) return NULL;
    node->val = data;
    node->next = NULL;
    return node;
}

void insertNode(Node* _head, Node* _node, int _t = 0) {
    if(_t == 0) {
        Node* temp = _head;
        while(temp->next) temp = temp->next;
        temp->next = _node;
    } else if(_t == -1) {
        if(_node->next == NULL) {
            _node->next = _head;
            _head = _node;
        } else {
            cout << "Insertion failed.\n";
        }
    }
}

void insertNodeAt(Node* _head, Node* _node, int _p = 0) {
    if(_p == 0) {
        insertNode(_head, _node, -1);
    } else if(_p > 0) {
        Node* temp = _head;
        int i = _p;
        while(--i && temp->next != NULL) temp = temp->next;

        Node* _temp = temp->next;
        if(_node->next == NULL) {
            _node->next = _temp;
            temp->next = _node;
        } else {
            cout << "Insertion failed.\n";
        }
    }
}

void deleteNode(Node* _head, int _t = 0) {
    if(_t == 0) {
        Node* temp = _head;
        _head = _head->next;
        delete temp;
    } else if(_t == -1) {
        Node* temp = _head;
        Node* prev = NULL;
        while(temp->next) {
            prev = temp;
            temp = temp->next;
        }
        prev->next = NULL;
        delete temp;
    }
}

bool searchNode(Node* _head, int x) {
  Node* temp = _head;
  while(temp != NULL) {
    if(temp->val == x)
    return true;
    temp = temp->next;
  }
  return false;
}

int main()
{
    ios::sync_with_stdio(0); cin.tie(0);

    typedef Node* node;

    node head = createNode(10);

    insertNode(head, createNode(30));
    insertNode(head, createNode(40));
    insertNode(head, createNode(20));
    insertNode(head, createNode(50));
    insertNodeAt(head, createNode(60), 5);

    node temp = head;

    while(temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    } cout << "\n";

    return 0;
}
