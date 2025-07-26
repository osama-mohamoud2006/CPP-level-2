#include <iostream>
#include"E:\projects\my library\AllStuff.h" 
using namespace AllStuff;
using namespace std;
int number_input() {
	int number = 0;
	number = enter_number("just enter anumber: ");
	return number;
}

int main() {
	// check if + or - 
	// assignment 1
	// method 1
	(number_input() > 0)? cout<< "\npostive\n":cout << "\nnegative\n";
	// method 2 


	// assignment 2
	/*write program to check if number is zero, postive, negative(using nested ternary operate)*/
	int number = number_input();
	(number == 0) ? cout << "\nit is zero! " : (number > 0) ? cout << "\nit is postive! " : cout << "\nit is negative number!";
	cout << "\n";
}