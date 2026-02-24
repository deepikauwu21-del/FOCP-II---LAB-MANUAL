/*Design a menu-driven calculator. Each operation must be implemented in a 
separate function: 
1 – Addition 
2 – Subtraction 
3 – Multiplication 
4 – Division */
#include<iostream>
using namespace std;
double add(double a, double b){
    return a+b;
}
double subtract(double a , double b){
    return a-b;
}
double multiplication(double a, double b){
    return a*b;
}
double division(double a, double b){
    if (b==0){
    cout<<"denominator cannot be zero";
    return 0;}
    return a/b;
}
int main(){
    int choice;
    double x,y;
    cout<<"1 for addition"<<endl;
    cout<<"2 for subraction"<<endl;
    cout<<"3 for multipliaction"<<endl;
    cout<<"4 for division"<<endl;

    cin>>choice;
    cin>>x>>y;
    switch(choice){
        case 1:
            cout<<add(x,y);
            break;
        case 2:
            cout<<subtract(x,y);
            break;
        case 3:
            cout<<multiplication(x,y);
            break;
        case 4:
            cout<<division(x,y);
            break;
        default:
            cout<<"invalid choice";  
    }
    return 0;
}