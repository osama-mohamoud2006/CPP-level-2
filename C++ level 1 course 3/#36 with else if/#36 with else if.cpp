#include <iostream>
#include <cmath>
using namespace std;
struct num {
	double n1;
	string op;
	double n2;
};
void input(num& number) {
	cout << "enter number 1: " << endl;
	cin >> number.n1;
	cout << "enter the operation: " << endl;
	cin >> number.op;
	cout << "enter number 2: " << endl;
	cin >> number.n2;
}
void operation(num& number) {
	if (number.op == "+") {
		cout << "the sum of 2 number " << (number.n1) + (number.n2) << endl;
	}
	else if (number.op == "-") {
		cout << "the diff of 2 number " << (number.n1) - (number.n2) << endl;
	}
	else if (number.op == "*") {
		cout << "the multiplication of 2 number " << (number.n1) * (number.n2) << endl;
	}
	else if (number.op == "/") {
		cout << "the divison of 2 number " << (number.n1) / (number.n2) << endl;
	}
	else if (number.op == "%") {
	
		cout << "the reminder of 2 number " << fmod (number.n1 , number.n2) << endl;
	}
	
}
int main() {
	num number;
	input(number);
	operation(number);
}