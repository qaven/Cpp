#include<iostream>
using namespace std;

int main(){
	int scoreOne, scoreTwo;
	
	cout<<"Please enter 2 grades, separated by a space: ";
	cin>>scoreOne>>scoreTwo;
	
	if(scoreOne < 65 && scoreTwo < 65)
		cout<<"Student Failed:(";
	else if(scoreOne>=95 && scoreTwo>=95)
		cout<<"Student Graduated with Honors:)";
	else
		cout<<"Student Graduated!";
	
	return 0;	
	
}
