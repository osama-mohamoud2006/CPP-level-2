#include <iostream>
using namespace std;
 
// old way to use functions

// defination the function
int input() {
	cout << "enter number: ";
	int number = 0; 
	cin >> number;
	if (cin.fail()) {
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		cout << "\nplease enter vaild number\n";
		cin >> number;
	}
}

int main() {

}