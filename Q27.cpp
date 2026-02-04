/*A supermarket software maintains item price lists. Implement a solution to store the prices of 10 
items in an array and display the maximum price*/
#include <iostream>
using namespace std;
int main(){
    int item;
    float max;

    for(int i = 1; i<10;i++){
        cout<<"enter price"<<i<<":";
        cin>>item;

        if (item>max){
            max=item;
        }
    }
    cout<<"item  with the maximum price="<<max<<endl;
}