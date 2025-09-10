#include <iostream>
using namespace std;
 
int n1(int num1) {
	return num1;
};

int n2(int num2) {
	return num2;
};

int main() {
	int num1;
	cout << "Enter a number: ";
	cin >> num1;

	int temp = num1;
	
	cout << "Enter another number: ";
	int num2;
	cin >> num2;

	num1 = num2;
	cout << num1 <<"\n" << temp;

}