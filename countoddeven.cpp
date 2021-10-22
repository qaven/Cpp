#include <iostream>
using namespace std;

int main(){
	int a, b, c, d;
	int odd = 0 , even = 0;
	
	
	cout<<"Please enter 4 positive integers, seperated by a space: ";
	cin>>a>>b>>c>>d;
	
	if(a % 2 == 0)
		even++;
	else
		odd++;
		
	if(b % 2 == 0)
		even++;
	else
		odd++;

	if(c % 2 == 0)
		even++;
	else
		odd++;				
	
	if(d % 2 == 0)
		even++;
	else
		odd++;
		
	
	if(even > odd)
		cout<<"more evens";
	else if(odd > even)
		cout<<"more odds";
	else
		cout<<"same number of evens and odds";	
	
	
	
	return 0;
	
			
}
