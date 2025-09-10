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
	int number = number_input();
	// check if + or - 
	// assignment 1
	// method 1
	(number > 0)? cout<< "\npostive\n":cout << "\nnegative\n";
	// method 2 
	string result = ((number > 0) ?  "\npostive\n" :  "\nnegative\n");
	cout << "this result 1 " << result << endl;

	// assignment 2
	/*write program to check if number is zero, postive, negative(using nested ternary operate)*/
	// method 1
	(number == 0) ? cout << "\nit is zero! " : (number > 0) ? cout << "\nit is postive! " : cout << "\nit is negative number!";
	// method 2
	string result2 = (number == 0) ?  "\nit is zero! " : (number > 0) ?  "\nit is postive! " :  "\nit is negative number!";
	cout << "this result 2 " << result2 << endl;
	cout << "\n";
}