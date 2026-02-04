/*A student wants to swap the values of two variables for practising coding basics. 
Implement a solution to swap two numbers using different techniques*/
//technique 1
#include <iostream>
using namespace std;
int main(){
    int a, b, temp;
    cout<<"enter two numbers=";
    cin>>a>>b;
    temp = a;
    a = b;
    b = temp;
    cout<<"after swapping values of a and b are="<<a<<" "<<b<<endl;
}