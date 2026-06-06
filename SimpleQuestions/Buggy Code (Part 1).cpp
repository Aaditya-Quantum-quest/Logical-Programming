/*
Fix the code in the code tab to pass this challenge (only syntax errors). Look at the examples below to get an idea of what the function should do.

Examples
cubes(3) ➞ 27

cubes(5) ➞ 125

cubes(10) ➞ 1000
 */

#include<iostream>
using namespace std;

int cubes(int n);

int main() {
    int n;
    cout << "Enter the number : ";
    cin >> n;
    cout << "The number you entered is " << n << " and the cubes is " << cubes(n);
    return 0;
}

int cubes(int n) {
    return n * n * n;
}
