#include<iostream>
using namespace std;
class BankAccount{
private:
    string accountHolderName;
    int accountNumber;
    double balance;
public:
BankAccount(string name, int accNo, double balns){
    accountHolderName=name;
    accountNumber=accNo;
    balance=balns;
}
void deposit(double amount){
    balance += amount;
    cout<<"amout deposited successfully \n";
}
void withdraw(double amount){
    if(amount>balance){
        cout<<"insufficent balance \n";
    }
    else{
        balance-=amount;
        cout<<"amt withdrawn succesffully \n";
    }
}
void displayDetails(){
    cout<<"\naccoint holder = "<<accountHolderName;
    cout<<"\naccount number = "<<accountNumber;
    cout<<"\ncurrent balance = "<<balance;
}
};
int main(){
    BankAccount acc("deepika",1234567890,5678);
    acc.deposit(1234);
    acc.withdraw(2345);
    acc.displayDetails();
    return 0;
}