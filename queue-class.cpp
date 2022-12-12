#include <bits/stdc++.h>
using namespace std;

class Queue {
    int *arr;
    int front;
    int rear;
    int size;
public:
    Queue(int _size) {
        this->size = _size;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    void enqueue(int x) {
        if(rear == size-1) {
            cout << "Queue Overflow" << endl;
            return;
        }
        arr[++rear] = x;
        if(front == -1) front++;
    }

    void dequeue() {
        if(front == -1 || front > rear) {
            cout << "Queue Underflow" << endl;
            return;
        }
        front++;
    }

    int Front() {
        if(front == -1 || front > rear) {
            cout << "Queue is empty" << endl;
            return -1;
        }
        return arr[front];
    }

    bool empty() {
        return (front == -1 || front > rear);
    }

    void print() {
        for(int i = front; i <= rear; ++i) 
            cout << arr[i] << " ";
    }
};

int main()
{
    Queue q(100);
    q.enqueue(2);
    q.enqueue(5);
    q.enqueue(10);
    q.enqueue(12);
    cout << q.Front() << endl;
    q.dequeue();
    cout << q.Front() << endl;
    q.dequeue();
    cout << q.Front() << endl;
    q.dequeue();
    cout << q.Front() << endl;
    q.dequeue();
    cout << q.Front() << endl;
    q.dequeue();
    cout << q.empty() << endl;
    return 0;
}