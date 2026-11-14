#include <iostream>
using namespace std;

#define MAX 5
int q[MAX];
int front = -1, rear = -1;
bool isFull()  { return (rear + 1) % MAX == front; }
bool isEmpty() { return front == -1; }

void enqueue(int value) {
    if (isFull()) {
        cout << "Queue is full!" << endl;
        return;
    }
    if (isEmpty()) {
        front = 0;
    }
    rear = (rear + 1) % MAX;
    q[rear] = value;
    cout << "Enqueued: " << value << endl;
}
void dequeue() {
    if (isEmpty()) {
        cout << "Queue Underflow" << endl;
        return;
    }
    cout << q[front] << " deleted" << endl;
    if (front == rear)            // last element removed
        front = rear = -1;
    else
        front = (front + 1) % MAX;
}
void display() {
    if (isEmpty()) {
        cout << "Queue is empty" << endl;
        return;
    }
    int i = front;
    cout << "Queue: ";
    while (true) {
        cout << q[i] << " ";
        if (i == rear) break;
        i = (i + 1) % MAX;
    }
    cout << endl;
}
int main() {
    enqueue(40); enqueue(20); enqueue(30); enqueue(40); enqueue(50);
    enqueue(28);                // overflow
    display();
    dequeue(); dequeue();
    enqueue(28); enqueue(79);   // reuses freed slots
    display();
    return 0;
}