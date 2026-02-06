/*A manufacturing QC system checks defect codes divisible by both 3 and 5. 
Implement a solution to store 5 elements in an array and count how many numbers are divisible by 3 and 5. */
#include <iostream>
using namespace std;
int main(){
    int elt[5];
    int count=0;
    for(int i=0;i<5;i++){
        cout<<"enter the the element "<<i+1<<":";
        cin>>elt[i];

        if(elt[i]%3==0 && elt[i]%5==0){
            count++;
        }
    }
    cout<<"the number elements divisible by both 5 and 3 are "<<count<<endl;
}