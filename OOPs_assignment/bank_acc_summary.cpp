#include<iostream>
using namespace std;
class BankAccount{
private:
    string accountHolderName;
    int accountNumber;
    double balance;

public:
    void inputDetails(){
        cout<<"enter account holder name, account number, initial balance:";
        cin>> accountHolderName >> accountNumber >> balance;
    }
    void deposit(double amount){
        balance += amount;
        cout<<"amount deposited successfully \n";
    }
    void withdraw(double amount){
        if(amount>balance){
            cout<<"insufficent balance";
        }
        else {
            balance-=amount;
            cout<<"amount withdrawn successfully \n";
        }
    }
    void displayDetails(){
        cout<<"\naccount holder = "<<accountHolderName;
        cout<<"\naccount number = "<<accountNumber;
        cout<<"\ncurrent balace = "<<balance<<endl;
    }
};
int main(){
    BankAccount a;
    a.inputDetails();
    double depositAmount, withdrawAmount;
    cout<<"enter amt to deposit = ";
    cin>>withdrawAmount;
    a.withdraw(withdrawAmount);
    a.displayDetails();
    return 0;

}