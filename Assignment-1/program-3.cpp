#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    int sum = 0;
    int digit;
    int b = number;
    do {
        digit = b % 10; 
        sum += digit; 
        b /= 10; 
    } while (temp != 0);     
    cout << "Sum of digits of " << number << " is: " << sum <<;
    return 0;
}

