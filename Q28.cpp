/*A data processing system classifies even and odd inputs separately. Implement a solution to 
store 5 elements in an array, compute sum of all even and sum of all odd numbers. */
#include <iostream>
using namespace std;
int main(){
    int arr[5];
    int EvenSum=0, OddSum=0;

    cout<<"enter the numbers";
    for(int i = 0; i<5;i++){
        cin>>arr[i];

        if(arr[i]%2==0){
            EvenSum+=arr[i];}
        else
            OddSum+=arr[i];
    }
    cout<<"sum of even numbers="<<EvenSum<<endl;
    cout<<"sum of odd numbers="<<OddSum<<endl;
}