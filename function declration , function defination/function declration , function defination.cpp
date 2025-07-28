#include <iostream>
using namespace std;
 
// old way to use functions

//  declaration  of  the functions
int input();
int add(int a=0  , int b=0  ); // you should pass the data type of parameter that you will define later
int sub(int a=0, int b=0);
int divison(int a=1, int b=1);


int main() {
	// call functions
	int a = input();
	int b = input();
	cout << add() << endl;
	//cout<<sub()<<endl; //
	//cout << divison() << endl;//

}

// definition of functions
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
int add(int a , int b ) {
		return a + b;

	}
int sub(int a, int b) {
	return a - b;
}
int divison(int a , int b) {
	return a / b;
}
