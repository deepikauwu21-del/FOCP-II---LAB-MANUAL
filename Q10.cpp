/*A calendar app calculates whether February has 29 days. Implement a solution to check if a year is a 
leap year or not.*/
#include <iostream>
using namespace std;
int main(){
    int year;
    cout<<"enter the year=";
    cin>>year;

    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
        cout << year << " is a leap year";
    } 
    else{
        cout<<year<<"is not a leap year";
    }
}