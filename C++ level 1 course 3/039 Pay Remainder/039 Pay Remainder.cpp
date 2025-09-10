#include <iostream>
using namespace std;
int main() {
	cout << "enter the total bill: ";
	int total;
	cin >> total;

	cout << "enter the cashpaid: ";
	int cash;
	cin >> cash;

	double reminder = total - cash;
	cout << " the reminder is: " << reminder;


}
