/* An HR system needs to calculate employees’ net salaries, including a fixed 12% bonus for each worker. 
Implement a solution to accept the number of employees and their basic salary. Compute bonus, net salary, and 
display results.*/
#include <iostream>
using namespace std;
int main(){
    int n;
    float basic_sal, bonus, net_sal;
    cout<<"enter the number of employees=";
    cin>>n;
    for (int i =1; i<n; i++){
        cout<<"enter basic salary of employee "<<i<<"=";
        cin>>basic_sal;

        bonus = basic_sal*0.12;
        net_sal = basic_sal+bonus;

        cout<<"bonus(12%)="<<bonus<<endl;
        cout<<"net salary="<<net_sal<<endl;
    }

}