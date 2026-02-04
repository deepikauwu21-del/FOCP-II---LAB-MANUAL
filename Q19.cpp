/*A network security system generates prime numbers in a range for encryption key pools. Implement a 
solution to find all prime numbers within a given range.*/
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int start, end;
    bool isPrime;

    cout << "Enter starting range: ";
    cin >> start;

    cout << "Enter ending range: ";
    cin >> end;

    cout << "Prime numbers in the given range are:\n";

    for (int num = start; num <= end; num++) {

        if (num <= 1)
            continue;

        isPrime = true;

        for (int i = 2; i <= sqrt(num); i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            cout << num << " ";
        }
    }

    return 0;
}
