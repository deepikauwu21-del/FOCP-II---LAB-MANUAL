/*Create a function: 
void callCounter(); 
Call the function multiple times. */
#include <iostream>
using namespace std;

void callCounter() {
    static int count = 0;  // static variable
    count++;
    cout << "Function called " << count << " times" << endl;
}

int main() {
    callCounter();
    callCounter();
    callCounter();
    callCounter();

    return 0;
}