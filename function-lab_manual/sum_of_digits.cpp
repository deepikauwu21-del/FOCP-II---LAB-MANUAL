/*Write a recursive function: 
int digitSum(int n); */
#include <iostream>
using namespace std;

int digitSum(int n){
    if(n==0)
       return 0;
    return (n%10)+digitSum(n/10);
}
int main(){
    int x;
    cin>>x;
    if(x<0)
      x=-x;
    cout<<digitSum(x);
    return 0;
}