/*A learning application analyzes numbers for mathematical properties. 
Design a solution to check whether a given number is a Perfect number or an Armstrong number*/
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num, choice;

    cout << "Enter a number: ";
    cin >> num;

    cout << "Choose operation:";
    cout << "1. Check Perfect Number";
    cout << "2. Check Armstrong Number";
    cout << "Enter choice: ";
    cin >> choice;

    if (choice == 1) {
        int sum = 0;

        for (int i = 1; i <= num / 2; i++) {
            if (num % i == 0) {
                sum += i;
            }
        }

        if (sum == num && num != 0) {
            cout << num << " is a Perfect number";
        } else {
            cout << num << " is not a Perfect number";
        }
    }

    else if (choice == 2) {
        int temp = num, digits = 0;
        float sum = 0;

        while (temp != 0) {
            digits++;
            temp /= 10;
        }

        temp = num;

        while (temp != 0) {
            int digit = temp % 10;
            sum += pow(digit, digits);
            temp /= 10;
        }

        if (sum == num) {
            cout << num << " is an Armstrong number";
        } else {
            cout << num << " is not an Armstrong number";
        }
    }

    else {
        cout << "Invalid choice";
    }

    return 0;
}
