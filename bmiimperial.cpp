#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	float weight, height;
	
	cout<<"Please enter weight in pounds: ";
	cin>>weight;
	
	cout<<"Please enter height in inches: ";
	cin>>height;
	
	weight = weight * 0.453592; // convert pounds to kilograms
	height = height * 0.0254;   // convert inches to meters
	
	float BMI = weight / (height * height);
	
	cout<<"BMI is: ";
	cout<<fixed<<setprecision(2)<<BMI<<endl;
	
	return 0;
	
}
