//C++ Calculator
#include <iostream>
#include <string>
using namespace std;

int main(){
    int x, y, opr;
    string loop;
    while (true){
	cout << "Calculator" << endl;
	cout << "Operations:\n" << "Addition - 1\n" << "Subtraction - 2\n" << "Multiplication - 3\n" << "Division - 4\n";
	cout << "Enter operation: (1/2/3/4) ";
	cin >> opr;
	cout << "Enter 1st number: ";
	cin >> x;
	cout << "Enter 2nd number: ";
	cin >> y;
	if (opr == 1){
		cout << x << " + " << y << " = " << x + y << endl;
	}
	
	else if (opr == 2){
		cout << x << " - " << y << " = " << x - y << endl;
	}
	
	else if (opr == 3){
		cout << x << " x " << y << " = " << x * y << endl;
	}

	else if (opr == 4){
		cout << x << " / " << y << " = " << x / y << endl;
		cout << "Remainder: " << x % y << endl;
	}

	else{
		cout << "Invalid Input" << endl;
		cout << "Do you want to continue: (yes/ no) ";
		cin >> loop;
		if (loop == "yes"){
			continue;
		}
		
		else if (loop == "no"){
			break;
		}
		
		else{
			cout << "Invalid Action" << endl;
			break;
		}
	}
	
	cout << "Do you want to continue: (yes/ no) ";
	cin >> loop;
	if (loop == "yes"){
		continue;
	}
	
	else if (loop == "no"){
		break;
	}
	
	else{
		cout << "Invalid Action" << endl;
	}
    }
    return 0;
}