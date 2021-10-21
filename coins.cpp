#include<iostream>
using namespace std;

int main()
{
	int dollars, cents;
	int quarters, dimes, nickels, pennies;
	int money;
	
	cout<<"Please enter the amount of money to convert:"<<endl;
	
	cout<<"# of dollars: ";
	cin>>dollars;
	
	cout<<"# of cents: ";
	cin>>cents;
	
	money = dollars*100 + cents;
	
	quarters = money / 25;
	money = money % 25;
	
	dimes = money / 10;
	money = money % 10;
	
	nickels = money / 5;
	money = money % 5;
	
	pennies = money;
	
	cout<<"The coins are "<<quarters<<" quarters, "<<dimes<<" dimes, "<<nickels<<" nickels and "<<pennies<<" pennies";
	
	return 0;
}
