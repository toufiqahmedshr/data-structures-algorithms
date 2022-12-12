#include <bits/stdc++.h>
using namespace std;

int arr[100];
int front = -1;
int rear = -1;

void enqueue(int x)
{
    if(rear == 99)
    {
        cout << "Queue Overflow" << endl;
        return;
    }
    arr[++rear] = x;
    if(front == -1) front++;
}

void dequeue()
{
    if(front == -1 || front > rear)
    {
        cout << "Queue Underflow" << endl;
        return;
    }
    front++;
}

int Front()
{
    if(front == -1 || front > rear)
    {
        cout << "Queue is empty" << endl;
        return -1;
    }
    return arr[front];
}

bool empty()
{
    return (front == -1 || front > rear);
}

int main()
{
    enqueue(2);
    enqueue(5);
    enqueue(10);
    enqueue(12);
    cout << Front() << endl;
    dequeue();
    cout << Front() << endl;
    dequeue();
    cout << Front() << endl;
    dequeue();
    cout << Front() << endl;
    dequeue();
    cout << Front() << endl;
    dequeue();
    cout << empty() << endl;
    return 0;
}