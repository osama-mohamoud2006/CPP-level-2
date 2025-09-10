#include<iostream>
#include <cmath>
using namespace std;
float power2(float num) {
	float power2 = pow(num, 2);
	
	return power2;
};
float power3(float num) {
	float power3 = pow(num, 3);

	return power3;
};
float power4(float num) {
	float power4 = pow(num, 4);
	return power4;
};
int main() {
	float num  ;
	cout << "Enter a number: ";
	cin >> num ;
	cout << "The square of "  << " is " << power2(num) << endl;
	cout << "The cube of " << " is " << power3(num) << endl;
	cout << "The fourth power of "  << " is " << power4(num) << endl;
	return 0;
}