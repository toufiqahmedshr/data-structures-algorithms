#include <bits/stdc++.h>
using namespace std;

struct node {
    int data;
    node *left;
    node *right;
};

node* new_node(int data) {
    node *temp = new node;
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

node* insert(node *root, int data) {
    if(root == NULL) {
        root = new_node(data);
        return root;
    }
    if(data < root->data) {
        root->left = insert(root->left, data);
    }
    else {
        root->right = insert(root->right, data);
    }
    return root;
}

bool search(node *root, int data) {
    if(root == NULL) {
        return false;
    }
    if(root->data == data) {
        return true;
    }
    if(data < root->data) {
        return search(root->left, data);
    }
    else {
        return search(root->right, data);
    }
}

int find_min(node *root) {
    if(root == NULL) {
        cout << "Tree is empty" << endl;
        return -1;
    }
    if(root->left == NULL) {
        return root->data;
    }
    return find_min(root->left);
}

int find_max(node *root) {
    if(root == NULL) {
        cout << "Tree is empty" << endl;
        return -1;
    }
    if(root->right == NULL) {
        return root->data;
    }
    return find_max(root->right);
}

int height(node *root) {
    if(root == NULL) {
        return -1;
    }
    return max(height(root->left), height(root->right)) + 1;
}

int size(node *root) {
    if(root == NULL) {
        return 0;
    }
    return size(root->left) + size(root->right) + 1;
}

int leaf_nodes(node *root) {
    if(root == NULL) {
        return 0;
    }
    if(root->left == NULL && root->right == NULL) {
        return 1;
    }
    return leaf_nodes(root->left) + leaf_nodes(root->right);
}

int main() {
    node *root = NULL;
    root = insert(root, 10);
    root = insert(root, 5);
    root = insert(root, 15);
    root = insert(root, 3);
    root = insert(root, 7);
    root = insert(root, 12);
    root = insert(root, 18);
    root = insert(root, 1);
    root = insert(root, 4);
    root = insert(root, 6);
    root = insert(root, 8);
    root = insert(root, 11);
    root = insert(root, 13);
    root = insert(root, 16);
    root = insert(root, 19);
    cout << "Minimum value in the tree: " << find_min(root) << endl;
    cout << "Maximum value in the tree: " << find_max(root) << endl;
    cout << "Height of the tree: " << height(root) << endl;
    cout << "Number of nodes in the tree: " << size(root) << endl;
    cout << "Number of leaf nodes in the tree: " << leaf_nodes(root) << endl;
    return 0;
}