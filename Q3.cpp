/*A weather app developer needs to provide both Celsius and Fahrenheit readings. Implement a solution to 
convert Fahrenheit temperature into Centigrade or vice versa.*/
#include <iostream>
using namespace std;
int main(){
    float celsius, fahrenheit;
    int choice;
    cout<<"enter the your choice for conversion"<<endl;
    cout<<"1.for celsius to fahrenheit"<<endl;
    cout<<"2. for fahrenheit to celsius"<<endl;
    cin>>choice;
    if(choice==1){
        cout<<"enter temprature in celsius=";
        cin>>celsius;
        fahrenheit = (celsius*9/5)+31;
        cout<<"temp in farhenheit="<<fahrenheit<<endl;
    }
    else if(choice==2){
        cout<<"enter temprature in fahrenheit=";
        cin>>fahrenheit;
        celsius=(fahrenheit-32)*5/9;
        cout<<"temp in celsius="<<celsius<<endl;
    }
}