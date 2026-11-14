/*Write a c function to perform the following operations on deque
1. Insert at front
2. Insert at rear
3. Delete from front
4. Delete from rear
*/
#include <stdio.h>
#define SIZE 5

int deque[SIZE];
int front = -1, rear = -1;

int isFull() {
    return (front == 0 && rear == SIZE - 1) || (front == rear + 1);
}

int isEmpty() {
    return front == -1;
}

/* 1. Front insertion */
void insertFront(int x) {
    if (isFull()) {
        printf("Overflow: deque is full\n");
        return;
    }
    if (isEmpty())               /* first element */
        front = rear = 0;
    else if (front == 0)         /* wrap around */
        front = SIZE - 1;
    else
        front--;
    deque[front] = x;
    printf("%d inserted at front\n", x);
}

/* 2. Rear insertion */
void insertRear(int x) {
    if (isFull()) {
        printf("Overflow: deque is full\n");
        return;
    }
    if (isEmpty())
        front = rear = 0;
    else if (rear == SIZE - 1)   /* wrap around */
        rear = 0;
    else
        rear++;
    deque[rear] = x;
    printf("%d inserted at rear\n", x);
}

/* 3. Front deletion */
void deleteFront() {
    if (isEmpty()) {
        printf("Underflow: deque is empty\n");
        return;
    }
    printf("%d deleted from front\n", deque[front]);
    if (front == rear)           /* only one element */
        front = rear = -1;
    else if (front == SIZE - 1)  /* wrap around */
        front = 0;
    else
        front++;
}

/* 4. Rear deletion */
void deleteRear() {
    if (isEmpty()) {
        printf("Underflow: deque is empty\n");
        return;
    }
    printf("%d deleted from rear\n", deque[rear]);
    if (front == rear)           /* only one element */
        front = rear = -1;
    else if (rear == 0)          /* wrap around */
        rear = SIZE - 1;
    else
        rear--;
}

void display() {
    int i;
    if (isEmpty()) {
        printf("Deque is empty\n");
        return;
    }
    printf("Deque: ");
    i = front;
    while (1) {
        printf("%d ", deque[i]);
        if (i == rear) break;
        i = (i + 1) % SIZE;
    }
    printf("\n");
}

int main() {
    insertRear(10);
    insertRear(20);
    insertFront(5);
    insertFront(1);
    display();          /* 1 5 10 20 */
    deleteFront();
    deleteRear();
    display();          /* 5 10 */
    return 0;
}