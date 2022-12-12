#include <bits/stdc++.h>
using namespace std;

class Stack {
    int *arr;
    int top;
    int size;
public:
    Stack(int _size) {
        this->size = _size;
        arr = new int[size];
        top = -1;
    }

    void push(int x) {
        if(top == size-1) {
            cout << "Stack Overflow" << endl;
            return;
        }
        arr[++top] = x;
    }

    void pop() {
        if(top == -1) {
            cout << "Stack Underflow" << endl;
            return;
        }
        top--;
    }

    int Top() {
        if(top == -1) {
            cout << "Stack is empty" << endl;
            return -1;
        }
        return arr[top];
    }

    bool empty() {
        return (top == -1);
    }

    void print() {
        for(int i = 0; i <= top; ++i) 
            cout << arr[i] << " ";
    }
};

int main()
{
    Stack s(100);
    s.push(2);
    s.push(5);
    s.push(10);
    s.push(12);
    cout << s.Top() << endl;
    s.pop();
    cout << s.Top() << endl;
    s.pop();
    cout << s.Top() << endl;
    s.pop();
    cout << s.Top() << endl;
    s.pop();
    cout << s.Top() << endl;
    s.pop();
    cout << s.empty() << endl;
    return 0;
}