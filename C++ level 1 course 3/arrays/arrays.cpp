#include <iostream>
using namespace std;
int main() {
	float x[3];
	cout << "enter grade 1: ";
	cin >> x[0];
	cout << "enter grade 2: ";
	cin >> x[1];
	cout << "enter grade 3: ";
	cin >> x[2];
	cout << "     " << endl << "\n";
	cout << "the avg grades: ";
	float avg = (x[0] + x[1] + x[2]) / 3;
	cout << "the avg of 3 grades is: " << avg;

}