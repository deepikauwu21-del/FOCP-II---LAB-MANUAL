/*A student wants to swap the values of two variables for practising coding basics. 
Implement a solution to swap two numbers using different techniques*/
//technique 3
#include <iostream>
using namespace std;
int main(){
    int a, b;
    cout<<"the the two numbers=";
    cin>>a>>b;

    a=a*b;
    b=a/b;
    a=a/b;
    
    cout<<"after swapping the numbers are="<<a<<" "<<b<<endl;
}