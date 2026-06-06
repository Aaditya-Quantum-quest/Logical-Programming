/*
Create a function that takes two numbers as arguments and returns their sum.
 */

#include <iostream>
using namespace std;

int Sum(int a, int b);

int main() {
    int a, b;
    cout << "Enter the First Number : ";
    cin >> a;
    cout << "Enter the Second Number : ";
    cin>>b;
    cout << "The Sum of " << a << " and " << b << " is " << Sum(a, b) << endl;
    cout << Sum(a, b) << endl;
    return 0;
}

int Sum(int a, int b) {
    return a + b;
}
