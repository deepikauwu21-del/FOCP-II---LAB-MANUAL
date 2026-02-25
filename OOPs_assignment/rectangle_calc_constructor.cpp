#include <iostream>
using namespace std;
class Rectangle
{
 int length;
 int width;
 public:
 Rectangle();//default
 Rectangle(int);//parameterrized constructor
 Rectangle(int,int);//parameterrized constructor
 int CalculateArea();
 int CalculatePerimeter();
 void display();
};
Rectangle::Rectangle()
{
    length=width=0;
}
Rectangle::Rectangle(int n)
{
    length=width=n;
}
Rectangle::Rectangle(int x, int y)
{
    length=x;width=y;
}
int Rectangle::CalculateArea()
{
    return length*width;
}
int Rectangle::CalculatePerimeter()
{
    return 2*(length+width);
}
void Rectangle::display()
{
    cout<<"\n length = "<<length;
    cout<<"\n width = "<<width;
    cout<<"\n area = "<<CalculateArea();
    cout<<"\n perimeter = "<<CalculatePerimeter();
}
int main()
{Rectangle c1(3),c2(3,2),c3;
c3.display();
c2.display();
c1.display();

return 0;
}