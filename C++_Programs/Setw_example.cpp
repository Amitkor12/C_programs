// C++ code to demonstrate
// the working of setw() function
#include <iomanip>
#include <ios>
#include <iostream>
using namespace std;

int main()
{

	// Initializing the integer
	int num = 50;

	cout << "Before setting the width: \n" << num << endl;

	// Using setw()
	cout << "Setting the width"	<< " using setw to 5: \n"<< setw(5)<<num;
    
	return 0;
}
