#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    int sum = 0;
    int digit;
    int temp = number;
    do {
        digit = temp % 10; 
        sum += digit; 
        temp /= 10; 
    } while (temp != 0);     
    cout << "Sum of digits of " << number << " is: " << sum << endl;
    return 0;
}

