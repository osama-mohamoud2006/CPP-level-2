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
float amount(float loan, int months) {
	return loan / months;
}
int main() {
	float loan = readnum("please enter the loan amount: "); 
	int months = readnum("please enter the period: ");
	cout << "--------------------------------------------------" << endl;
	cout << "you will pay "<<amount(loan,months)<<" every month" << endl;
}
