#include<iostream>
using namespace std;

int main()
{
	int quarters, dimes, nickels, pennies;
	int dollars, cents, totalValue;
	
	cout<<"Please enter the number of coins"<<endl;
	
	cout<<"# of quarters: ";  //25 cents
	cin >> quarters;
	cout<<"# of dimes: ";  //10 cents
	cin >> dimes;
	cout<<"# of nickels: ";  //5 cents
	cin >> nickels;
	cout<<"# of pennies: ";  //1 cents
	cin >> pennies;
	
	totalValue = (quarters * 25) + (dimes * 10) + (nickels * 5) + (pennies * 1);
	
	dollars = totalValue / 100;
	cents = totalValue % 100;
	
	cout<< "The total is "<<dollars<<" dollars and "<<cents<<" cents";
	
	return 0;
	
}
