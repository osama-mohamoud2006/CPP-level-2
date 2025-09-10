#include <iostream>
using namespace std;
int read(string message) {
int  v;
	do {
		cout << "enter " << message << endl;
		cin >> v;

	} while (0 >= v);
	return v;
}

bool confrim_card() {
	int counter=3;
	int pass = 1234; // default pass 

	do {
		counter--;
		pass = read("please enter your password: ");
		if (pass == 1234) {
			system("color 2f");
			cout << "-----------------------------------" << endl;
			cout << "your balance is " << "7498" << endl;
			
			return 1;
		}
		else
		{
			cout << "\nWrong PIN\n "<<" you have " << counter <<" chance"<<endl;  // Notify the user of an incorrect PIN.
			system("color 4F"); // trun color to red 
		}

	} while (pass != 1234 && counter >= 1);
	cout << "------------------------------------------" << endl;
}
int main() {

	cout << "-----------------------------------" << endl;
	confrim_card();
}