#include <bits/stdc++.h>
using namespace std;

int arr[100];
int front = -1;
int rear = -1;

void enqueue(int x)
{
    if((rear+1)%100 == front)
    {
        cout << "Queue Overflow" << endl;
        return;
    }
    rear = (rear+1)%100;
    arr[rear] = x;
    if(front == -1) front = rear;
}

void dequeue()
{
    if(front == -1)
    {
        cout << "Queue Underflow" << endl;
        return;
    }
    if(front == rear) front = rear = -1;
    else front = (front+1)%100;
}

int Front()
{
    if(front == -1)
    {
        cout << "Queue is empty" << endl;
        return -1;
    }
    return arr[front];
}

bool empty()
{
    return (front == -1);
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
}