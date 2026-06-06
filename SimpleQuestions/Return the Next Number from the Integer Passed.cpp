/*
Create a function that takes a number as an argument, increments the number by +1 and returns the result.

Examples
addition(0) ➞ 1

addition(9) ➞ 10

addition(-3) ➞ -2
 */

#include <iostream>
using namespace std;

int addition(int n);

int main() {
    int n;
    cout << "Enter the Number : ";
    cin >> n;
    cout<<"The Addition of 1 in Your Number : " << addition(n) << endl;
    return 0;
}

int addition(int n) {
    return n + 1;
}
