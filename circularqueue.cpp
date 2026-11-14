#include <iostream>
using namespace std;

#define MAX 5
int q[MAX];
int front = -1, rear = -1;
bool isFull()  { return (rear + 1) % MAX == front; }
bool isEmpty() { return front == -1; }