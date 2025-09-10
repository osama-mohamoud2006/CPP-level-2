#include <iostream>
using namespace std;
float readnum(string message) {
	float v;
	do {
		cout << "enter " << message << endl;
		cin >> v;

	} while (0 >= v);
	return v;
}

bool confrim() {
	string password;
	
	do {
	int input = readnum("enter password ");
		if (input == 1234) {
			return 1;  //true
		}
		else
		{
			cout << "\nWrong PIN\n";  // Notify the user of an incorrect PIN.
			system("color 4F");  // Change console text to red (Windows-specific).
			
		}
		
	} while (password != "1234");
	
	
}
int main() {
	if (confrim() == 1) {
		system("color 2F");  // Change console text to green (Windows-specific).
		cout << "\nYour account balance is " << 7500 << '\n';  // Display account balance
	}
}