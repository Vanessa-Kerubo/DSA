//Write a program to implement sparse using arrays
#include <iostream>
using namespace std;

int main() {
    int a[10][10], sparse[50][3];
    int rows, cols, k = 1;

        cout << "Enter number of rows and columns: ";
    cin >> rows >> cols;

        cout << "Enter the matrix elements:" << endl;
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            cin >> a[i][j];
            