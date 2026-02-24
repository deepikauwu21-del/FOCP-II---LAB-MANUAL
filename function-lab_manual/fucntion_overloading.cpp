/*Overload the function area() for: 
• Circle (radius) 
• Rectangle (length, breadth) 
• Triangle (base, height)*/
#include <iostream>
using namespace std;

double area(double radius){  //for circl e
    return 3.14*radius*radius;
}
double area(double length, double width){ //for rectangle 
    return length*width;
}
double area(double height, double base, char type ){  //for triangle 
    return 0.5*base*height;
}
int main(){
    int choice;
    cin>>choice;
    double x,y;
    switch(choice){
        case 1:
          cin>>x;
          cout<<"area of the cicle is = "<<area(x)<<endl;
          break;
        case 2:
          cin>>x>>y;
          cout<<"area of the rectangle is = "<<area(x,y)<<endl;
          break;
        case 3:
          cin>>x>>y;
          cout<<"area of the triangle is = "<<area(x,y,'t');
          break;
        default:
          cout<<"inavlid choice";
    }
    return 0;
}