/*A wholesale supplier applies 10% discount if the order > 1000 items. Implement a solution to compute total 
expenses and apply a discount accordingly*/
#include <iostream>
using namespace std;

int main() {
    int quantity;
    float price, total, discount = 0, net_amount;

    cout << "Enter number of items: ";
    cin >> quantity;

    cout << "Enter price per item: ";
    cin >> price;

    total = quantity * price;

    if (quantity > 1000) {
        discount = total * 0.10;
    }

    net_amount = total - discount;

    cout << "Total cost = " << total << endl;
    cout << "Discount = " << discount << endl;
    cout << "Net amount to pay = " << net_amount << endl;

    return 0;
}
