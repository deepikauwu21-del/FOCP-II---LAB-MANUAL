/*A shopkeeper wants to calculate the total bill amount after applying a 20% discount on the purchase. 
Implement a solution to accept item no., quantity, and unit price. Compute the amount and apply 20% discount*/
#include <iostream>
using namespace std;
int main(){
    int item_no, quantity;
    float unit_price, amt, discount, total_amt;
    
    cout<<"enter item number=";
    cin>>item_no;

    cout<<"enter unit price=";
    cin>>unit_price;

    cout<<"enter quantity=";
    cin>>quantity;

    amt = quantity*unit_price;
    discount=amt*0.20;
    total_amt= amt-discount;

    cout<<"item no.="<<item_no<<endl;
    cout<<"total amout="<<amt<<endl;
    cout<<"discount="<<discount<<endl;
    cout<<"total amount after discount="<<total_amt<<endl;
}