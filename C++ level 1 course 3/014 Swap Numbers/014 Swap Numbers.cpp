#include <iostream>
using namespace std;
int main() {
	cout << "enter 2nums: ";
	short int num1, num2;
	cin >> num1 >> num2;
	short int swap1 = num1; // the original value//
	cout << "the numbers without swap: " << "\n" << num1 << "\n" << num2 << endl;
	short int s = num1 = num2; // shifted num1 to num 2///
	short int swap2 = s; /// print shifted
	
	cout << "\n";
	cout << "the number with swap: " <<"\n" << swap2 <<"\n" << swap1 << endl;

	// another method
	/*cout << "enter 2 nums: ";
	short int n1, n2;
	cin >> n1 >> n2 ;
	cout << "\n";
	short int alt1 = n2;
	short int alt2 = n1;
	cout << n1 << endl;
	cout << n2 << endl<<":\n";
	cout << alt1 << endl;
	cout << alt2 << endl;*/
}