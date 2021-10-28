#include <iostream>
using namespace std;

int main(){
	int number;
	int i = 0;
	
	cout<<"Please enter a positive integer: ";
	cin>>number;
	
	while(i < number){
		cout<<(i+1)*2<<endl;
		i++;
	}
	
	return 0;
}
