#include <iostream>
using namespace std;

int main(int argc, char* argv[]){

	if (argv[1] % 4 == 0 && argv[1] % 100 != 0)
		cout<<argv[1]<<" was a leap year";
	else
		cout<<argv[1]<<" was not a leap year";

	return 0;
}
