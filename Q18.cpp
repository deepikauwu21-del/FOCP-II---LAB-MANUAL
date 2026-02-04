/*. A String-matching tool validates if IDs are palindromes. Implement 
a solution to check whether a given ID is a palindrome.*/
#include <iostream>
using namespace std;

int main() {
    string id;
    int flag = 1;

    cout << "Enter the ID: ";
    cin >> id;

    int n = id.length();

    for (int i = 0; i < n / 2; i++) {
        if (id[i] != id[n - i - 1]) {
            flag = 0;
            break;
        }
    }

    if (flag)
        cout << "ID is a Palindrome";
    else
        cout << "ID is not a Palindrome";

    return 0;
}
