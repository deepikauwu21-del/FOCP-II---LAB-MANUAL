/*A student wants to swap the values of two variables for practising coding basics. 
Implement a solution to swap two numbers using different techniques*/
//technique 2
#include <iostream>
using namespace std;
int main(){
    int a, b;
    cout<<"enter the two numbers=";
    cin>>a>>b;
    a=a+b;
    b=a-b;
    a=a-b;

    cout<<"after swaping the numbers are="<<a<<" "<<b<<endl;

}