#include <iostream>
using namespace std;
class Book{
private:
    string title;
    string author;
    double price;
public:
    void inputDetails(){
        cout<<"enter title , author and price of the book";
        cin>>title>>author>>price;
    }
    void displayDetails(){
        cout<<"\n title = "<<title;
        cout<<"\n author = "<<author;
        cout<<"\n price = "<<price<<endl;
    }
};
int main(){
    Book b;
    b.inputDetails();
    b.displayDetails();
    return 0;
}