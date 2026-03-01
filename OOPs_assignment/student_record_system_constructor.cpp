#include <iostream>
using namespace std;

class Student {
public:
    int rollNo;
    string name;
    int marks1;
    int marks2;
    int marks3;

    // Constructor
    Student() {
        cout << "\nEnter RollNo, Name, Marks1, Marks2, Marks3: ";
        cin >> rollNo >> name >> marks1 >> marks2 >> marks3;
    }

    int calculateTotal() {
        return (marks1 + marks2 + marks3);
    }

    void displayDetails() {
        cout << "\nRoll No: " << rollNo;
        cout << "\nName: " << name;
        cout << "\nMarks 1: " << marks1;
        cout << "\nMarks 2: " << marks2;
        cout << "\nMarks 3: " << marks3;
        cout << "\nTotal Marks: " << calculateTotal();
    }
};

int main() {
    Student s;   // Constructor automatically runs
    s.displayDetails();
    return 0;
}