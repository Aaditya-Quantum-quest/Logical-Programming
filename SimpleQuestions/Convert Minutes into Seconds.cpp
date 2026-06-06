/*
Write a function that takes an integer minutes and converts it to seconds.
 */

#include <iostream>
using namespace std;

int MinutesIntoSeconds(int n);

int main() {
    int n;
    cout << "Enter the Time in Minutes : ";
    cin >> n;
    cout << "The Converted Time Into Second is : " << MinutesIntoSeconds(n) << endl;
    return 0;
}

int MinutesIntoSeconds(int n) {
    return n * 60;
}
