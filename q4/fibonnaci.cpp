//Write a recursive progam to show fibonacci series upto N terms
#include <iostream>
using namespace std;    

long long fibonacci(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    cout << "Enter N: ";
    cin >> n;

    if (n < 1)
        cout << "N must be 1 or greater" << endl;
    else
        cout << "The " << n << "th term of the Fibonacci series = " << fibonacci(n) << endl;

    return 0;
}