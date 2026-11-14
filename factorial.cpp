//Write a recursive function to find the factorial of a number
#include <iostream>
using namespace std;

long long fact(int n){
    if (n==0 || n==1)
    return 1;
    else 
    return n * fact(n-1);

}
