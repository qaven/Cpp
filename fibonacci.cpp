#include <iostream>
using namespace std;

int main(){
	int number;
	int i = 1;
	int j = 1;
	
	cout<<"Please enter a positive integer greater than 1: ";
	cin>>number;
	
	cout<<i<<endl<<j<<endl;
	
	for(int n = 0; n < number - 2 ; n++){
		int temp = j;
		j = i;
		i = i + temp;
		cout<<i<<endl;
	}
	
	return 0;
}
