/*A weather monitoring app records 30-day temperature logs. Implement a solution to store daily 
temperatures in an array and display the minimum temperature for the month.*/
#include <iostream>
using namespace std;
int main(){
    float temp[30];
    float min;
    for(int i = 0; i<30;i++){
        cout<<"enter the temp of day "<<i+1<<":";
        cin>>temp[i];

        if(i==0)
        min=temp[i];
        else if(temp[i]<min)
        min=temp[i];
    }
    cout<<"minimum temp of the month="<<min<<endl;
}