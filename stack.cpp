#include <bits/stdc++.h>
using namespace std;

int arr[100];
int top = -1;

void push(int x)
{
    if(top == 99)
    {
        cout << "Stack Overflow" << endl;
        return;
    }
    arr[++top] = x;
}

void pop()
{
    if(top == -1)
    {
        cout << "Stack Underflow" << endl;
        return;
    }
    top--;
}

int Top()
{
    if(top == -1)
    {
        cout << "Stack is empty" << endl;
        return -1;
    }
    return arr[top];
}

bool empty()
{
    return (top == -1);
}

int main()
{
    push(2);
    push(5);
    push(10);
    push(12);
    cout << Top() << endl;
    pop();
    cout << Top() << endl;
    pop();
    cout << Top() << endl;
    pop();
    cout << Top() << endl;
    pop();
    cout << Top() << endl;
    pop();
    cout << empty() << endl;
    return 0;
}