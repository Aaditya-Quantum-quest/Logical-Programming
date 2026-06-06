/*
Create a function that takes an array containing only numbers and return the first element.

Examples
getFirstValue([1, 2, 3]) ➞ 1

getFirstValue([80, 5, 100]) ➞ 80

getFirstValue([-500, 0, 50]) ➞ -500
 */

#include <iostream>
using namespace std;

int getFirstValue(int numbers[], int size);

int main() {
    int n;
    int size;
    int result;
    cout << "How many numbers you want to enter : ";
    cin >> n;
    if (n <= 0) {
        cout << "Enter a positive Number";
        return 0;
    }
    int numbers[n];
    size = sizeof(numbers) / sizeof(numbers[0]);
    result = getFirstValue(numbers, size);
    cout << "The First Element is : " << result;
    return 0;
}

int getFirstValue(int numbers[], int size) {
    for (int i = 0; i < size; i++) {
        cout << "Enter The " << i + 1 << " number : ";
        cin >> numbers[i];
    }
    cout << "The numbers you entered are: " << endl;
    for (int i = 0; i < size; i++) {
        cout << numbers[i] << endl;;
    }
    return numbers[0];
}
