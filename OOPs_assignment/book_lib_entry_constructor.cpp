#include <iostream>
using namespace std;
class Book{
private:
   string title;
   string author;
   double price;
public:
   Book(string t, string a, double p){
    title = t;
    author = a;
    price = p;
   }
   void displayDetails(){
    cout<<"\n title = "<<title;
    cout<<"\n auhtor = "<<author;
    cout<<"\n price = "<<price;
   }
};
int main(){
    Book b("zyx","adDs",234);
    b.displayDetails();
    return 0;
}