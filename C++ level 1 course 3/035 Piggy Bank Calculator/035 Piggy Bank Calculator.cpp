#include <iostream>
using namespace std;
int main() {
	cout << "enter penny: " << endl;
	int penny;
	cin >> penny;
	cout << "enter nickle: " << endl;
	int nickle;
	cin >> nickle;
	cout << "enter dimes: " << endl;
	int dimes;
	cin >> dimes;
	cout << "enter quarters: " << endl;
	int quarters;
	cin >> quarters;
	cout << "enter dollars: " << endl;
	int dollars;
	cin >> dollars;

	double total = (penny * 1) + (5 * nickle) + (10 * dimes) + (25 * quarters) + (dollars * 100);
	double total_dollar = total / 100;
	cout << total_dollar << " dollars" << endl;
	cout << total << " pennies" << endl;

}