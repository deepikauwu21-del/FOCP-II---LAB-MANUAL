/*Implement two functions: 
void swapByValue(int a, int b); 
void swapByReference(int &a, int &b); 
Demonstrate the difference between the two approaches. */
#include <iostream>
using namespace std;
void swapByValue(int a, int b){  //swap by value
    int temp =a;
    a=b;
    b=temp;
    cout<<"a= "<<a<<" b="<<b<<endl;
}

void swapByReference(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;

    cout<<"a= "<<a<<" b="<<b<<endl;
}
int main(){
    int a, b;
    cin>>a>>b;
    cout<<"before swapping=";
    cout<<"a="<<a<<" b="<<b<<endl;
    swapByValue(a,b);
    cout<<"after swapping=";
    cout<<"a= "<<a<<" b="<<b<<endl;
    swapByReference(a,b);
    cout<<"after swapping=";
    cout<<"a ="<<a<<" b="<<b<<endl;

    return 0;
}