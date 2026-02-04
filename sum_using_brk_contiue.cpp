/*Create a program that takes multiple numbers as input and calculates their sum while using Continue to skip negative num bers and break to stop input if the user enters a specific value.*/
#include <iostream>
using namespace std;
int main(){
    int num;
    int sum=0;
    cout<<"enter numbers(enter 0 to stop):"<<endl;
    while(true){
        cin>>num;
        if(num==0){
            break;
        }
        if(num < 0){
            continue;
        }
        sum += num;
    }
    cout<<"sum of positive numbers="<<sum<<endl;
}