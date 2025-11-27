
#include <iostream>
#include <string>;
using namespace std;

//This Function is named panda
//Assign function first before use
string panda();
string panda()
{
    return string("Nail polish");
}

double priceOfItem(double price);
double priceOfItem(double price) {
    double VAT = 0.15,totalCost=0;
    totalCost += price + (price * VAT);
    return totalCost;
}

//This Function is named main
int main()
{
    double nailPolishPrice = 14.99;
    cout << "Welcome to our store"<<endl;
    cout << "================================" << endl;
    cout << "We sell " << panda() << endl;
    cout << "The price of the nail polish is: R" << nailPolishPrice << endl;
    cout << "The TotalPrice of the nail polish(VAT included) is: R" << priceOfItem(nailPolishPrice);

}


