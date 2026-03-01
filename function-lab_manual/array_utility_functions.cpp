#include <iostream>
using namespace std;

// Function to calculate sum
int sumArray(int arr[], int size) {
    int sum = 0;
    for(int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

// Function to calculate average
double average(int arr[], int size) {
    return (double)sumArray(arr, size) / size;
}

// Function to check if key exists
bool contains(int arr[], int size, int key) {
    for(int i = 0; i < size; i++) {
        if(arr[i] == key)
            return true;
    }
    return false;
}

int main() {
    int N;
    cin >> N;

    int arr[N];

    for(int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    int key;
    cin >> key;

    cout << sumArray(arr, N) << endl;
    cout << average(arr, N) << endl;

    if(contains(arr, N, key))
        cout << "YES";
    else
        cout << "NO";

    return 0;
}