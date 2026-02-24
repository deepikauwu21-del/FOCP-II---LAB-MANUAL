/*Write a function: 
void findMinMax(int arr[], int size, int &minVal, int &maxVal); */
#include <iostream>
using namespace std;

void findMinMax(int arr[], int size, int &minVal, int &maxVal){
    minVal = arr[0];
    maxVal = arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]<minVal)
           minVal=arr[i];
        if(arr[i]>maxVal)
           maxVal=arr[i];
    }
}
int main(){
   int size;
   cin>>size;
   int arr[size];
   for(int i=0;i<size;i++){
    cin>>arr[i];
   }
   int minVal, maxVal;
   findMinMax(arr,size,minVal,maxVal);
   cout<<"minimum values is "<<minVal<<" maximum value is "<<maxVal;
   return 0;
}