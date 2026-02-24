#include <iostream>
using namespace std;
class Student{
public:
int rollNo;
string name;
int marks1;
int marks2;
int marks3;
void inputDetails()//setter
{
    cout<<"\n enter Rollnp, name, marks1, marks2, marks3";
    cin>>rollNo>>name>>marks1>>marks2>>marks3;
}
int calculateTotal()//getter
{
    return (marks1+marks2+marks3);
}
void displayDetails()//getter
{
    cout<<"\n rollNo: "<<rollNo<<"\n Name : "<<name;
    cout<<"\n Marks 1 : "<<marks1<<"\n Marks 2: "<<marks2<<"\n marks3 :"<<marks3;
    cout<<"\n total marks "<<calculateTotal();
}
};
int main(){
    Student s;
    s.inputDetails();
    s.displayDetails();
    return 0;
}