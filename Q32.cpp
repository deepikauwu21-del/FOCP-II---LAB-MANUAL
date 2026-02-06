/*A stock market app tracks first and second highest stock values. Implement a solution to find the largest 
and second largest number in an array of size 5*/
#include <iostream>
using namespace std;
int main(){
    int stock[5];
    for(int i=0;i<5;i++){
        cout<<"enter the value of stock "<<i+1<<":";
        cin>>stock[i];
    }
    int largest=stock[0];
    int IInd_largest=-1;
    for(int i =1;i<5;i++){
        if(stock[i]>largest){
            IInd_largest=largest;
            largest=stock[i];
        }
        else if(stock[i]>IInd_largest && stock[i]!=largest){
            IInd_largest=stock[i];
        }
    }
    cout<<"largest stock value is "<<largest<<endl;
    cout<<"second largest stock value is "<<IInd_largest<<endl;
       
}