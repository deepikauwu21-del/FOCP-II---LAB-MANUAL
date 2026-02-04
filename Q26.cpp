/*. The school report card system stores subject marks for each student. 
Implement a solution to accept marks in 5 subjects, compute the total and percentage, and display the result. */
#include <iostream>
using namespace std;
int main(){
    float sub1, sub2, sub3, sub4, sub5, total, precentage;
    cout<<"enter marks of subject 1=";
    cin>>sub1;
    cout<<"enter marks of subject 2=";
    cin>>sub2;
    cout<<"enter marks of subject 3=";
    cin>>sub3;
    cout<<"enter marks of subject 4=";
    cin>>sub4;
    cout<<"enter marks of subject 5=";
    cin>>sub5;

    total = sub1+sub2+sub3+sub4+sub5;
    cout<<"total marks of the student "<<total<<endl;

    precentage = total/5;
    cout<<"percentage="<<precentage;
}