/* teacher wants to calculate the average marks of three students to determine the class performance. 
Implement a solution to accept three numbers and compute their average. */
#include <iostream>
using namespace std;
int main(){
    float num1, num2, num3, avg;
    cout<<"enter the marks=";
    cin>>num1;
    cin>>num2;
    cin>>num3;
    avg= (num1+num2+num3)/3;
    cout<<"the avg marks are="<<avg<<endl;
}