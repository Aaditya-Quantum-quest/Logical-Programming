/*
Write a function that takes the base and height of a triangle and return its area.

Examples
triArea(3, 2) ➞ 3

triArea(7, 4) ➞ 14

triArea(10, 10) ➞ 50
 */

#include <iostream>
using namespace std;

int triArea(int base, int height);

int main() {
    int base;
    int height;
    cout << "Enter the base : ";
    cin >> base;
    cout << "Enter the height : ";
    cin >> height;
    cout << "The height is " << height << " and the base is " << base << endl;
    cout << "The Area of the Triangle is " << triArea(base, height) << endl;
    return 0;
}

int triArea(int base, int height) {
    return (base * height) / 2;
}
