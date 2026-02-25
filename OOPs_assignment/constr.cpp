#include <iostream>
using namespace std;
class Candy{
    string colour; int points;
    public:
    void setCandy(string c, int p);
    void displayCandy();
    Candy();
    Candy(string c1, int p);
};
void Candy::setCandy(string c, int p){
    colour=c;points = p;
}
void Candy::displayCandy(){
    cout<<"\n colour = "<<colour;
    cout<<"\n points = "<<points;
}
Candy::Candy()//default
{
    colour="black";points=0;
}
Candy::Candy(string cl, int pt) // parameterized constructor 
{
    colour=cl;points=pt;
}
int main(){
    Candy c1("pink",32),c2; //instance of the class
    c1.displayCandy();
    c2.displayCandy();


}