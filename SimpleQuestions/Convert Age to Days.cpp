/*
Create a function that takes the age in years and returns the age in days.

Examples
calcAge(65) ➞ 23725

calcAge(0) ➞ 0

calcAge(20) ➞ 7300
 */

#include <iostream>
using namespace std;

int calcAge(int age);

int main() {
 int age;
 cout << "Enter your Age : ";
 cin >> age;
 cout<< "your age is " << age << endl;
 cout<< "You passed " << calcAge(age) << " days";
 return 0;
}

int calcAge(int age) {
 age = age * 365;
 return age;
}