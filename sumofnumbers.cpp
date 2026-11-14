//Write a recursive program to find the sum of N natural numbers

#include <iostream>
using namespace std;

int sum(int n) {
    if (n == 0)            // base case
        return 0;