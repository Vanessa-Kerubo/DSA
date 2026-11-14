//Write a recursive function to find the factorial of a number
#include <iostream>
using namespace std;

long long fact(int n){
    if (n==0 || n==1)
    return 1;
    else 
    return n * fact(n-1);

}
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n < 0)
        cout << "Factorial is not defined for negative numbers" << endl;
    else
        cout << n << "! = " << fact(n) << endl;

    return 0;
}