#include <iostream>
using namespace std;
 
// old way to use functions

// declration  of  the functions
int input();
int add(int, int);
int sub(int, int);
int divison(int, int);


int main() {
	// call functions
	int a = input();
	int b = input();
	cout << add(a, b) << endl;;
	cout<<sub(a, b)<<endl;
	cout << divison(a, b) << endl;

}

// defination of functions
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
	return number;
}
int add(int a , int b) {
		return a + b;

	}
int sub(int a, int b) {
	return a - b;
}
int divison(int a , int b) {
	return a / b;
}
