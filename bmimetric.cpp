#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int weight; // in kilograms
	float height; // in meters
	
	cout<<"Please enter weight in kilograms: ";
	cin>>weight;
	
	cout<<"Please enter height in meters: ";
	cin>>height;
	
	float BMI = weight / (height*height);
	
	cout<<"BMI is: ";
	cout<<fixed<<setprecision(2)<<BMI<<endl;
	
	return 0;
}
