/*A payroll system maintains employee salary records. Implement a solution to accept salary of 
10 employees in an array, compute total salary and average salary, then display the result. */
#include <iostream>
using namespace std;
int main(){
    float sal[10];
    float total=0, avg;
    for(int i=0;i<10;i++){
        cout<<"enter the salary of the employee"<<i+1<<":";
        cin>>sal[i];
        total+=sal[i];
    }
    avg=total/10;
    cout<<"total salary of the employees="<<total<<endl;
    cout<<"average salary="<<avg<<endl;
}