#include <iostream>
using namespace std;

class Temperature {
private:
    float celsius;

public:
    // Constructor
    Temperature(float c) {
        celsius = c;
    }

    float convertToFahrenheit() {
        return (celsius * 9.0 / 5.0) + 32;
    }

    void displayResult() {
        cout << "Temperature in Fahrenheit: "
             << convertToFahrenheit() << endl;
    }
};

int main() {
    float c;
    cout << "Enter temperature in Celsius: ";
    cin >> c;

    Temperature t(c);   // constructor call
    t.displayResult();

    return 0;
}