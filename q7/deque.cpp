/*Write a c function to perform the following operations on deque
1. Insert at front
2. Insert at rear
3. Delete from front
4. Delete from rear
*/
#include <iostream>
using namespace std;

#define SIZE 5

int deque[SIZE];
int front = -1, rear = -1;
bool isFull() {
    return (front == 0 && rear == SIZE - 1) || (front == rear + 1);
}

bool isEmpty() {
    return front == -1;
}

void insertFront(int x) {
    if (isFull()) {
        cout << "Overflow: deque is full" << endl;
        return;
    }
    if (isEmpty())               // first element
        front = rear = 0;
    else if (front == 0)         // wrap around
        front = SIZE - 1;
    else
        front--;
    deque[front] = x;
    cout << x << " inserted at front" << endl;
}
void insertRear(int x) {
    if (isFull()) {
        cout << "Overflow: deque is full" << endl;
        return;
    }
    if (isEmpty())
        front = rear = 0;
    else if (rear == SIZE - 1)   // wrap around
        rear = 0;
    else
        rear++;
    deque[rear] = x;
    cout << x << " inserted at rear" << endl;
}
void deleteFront() {
    if (isEmpty()) {
        cout << "Underflow: deque is empty" << endl;
        return;
    }
    cout << deque[front] << " deleted from front" << endl;
    if (front == rear)           // only one element
        front = rear = -1;
    else if (front == SIZE - 1)  // wrap around
        front = 0;
    else
        front++;
}
void deleteRear() {
    if (isEmpty()) {
        cout << "Underflow: deque is empty" << endl;
        return;
    }
    cout << deque[rear] << " deleted from rear" << endl;
    if (front == rear)           // only one element
        front = rear = -1;
    else if (rear == 0)          // wrap around
        rear = SIZE - 1;
    else
        rear--;
}
void display() {
    if (isEmpty()) {
        cout << "Deque is empty" << endl;
        return;
    }
    cout << "Deque: ";
    int i = front;
    while (true) {
        cout << deque[i] << " ";
        if (i == rear) break;
        i = (i + 1) % SIZE;
    }
    cout << endl;
}
int main() {
    insertRear(10);
    insertRear(20);
    insertFront(5);
    insertFront(1);
    display();          // 1 5 10 20
    deleteFront();
    deleteRear();
    display();          // 5 10
    return 0;
}