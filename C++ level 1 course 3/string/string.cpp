#include<iostream>
#include<string>
using namespace std;
struct name {
	string full_name;
};

struct number_string{
	string num1;
	string num2;
};

int main() {

	cout << "enter your full name: " << endl;
	name full;
	getline(cin, full.full_name);
	cout << "your name is: " << full.full_name << endl;
	cout << " the length of string is:" << full.full_name.length() << endl;
	cout << "____________________________________" << endl << "\n";


	cout << " enter the num of charachter you want to display: " << endl;
	string x;
	getline(cin, x);
	int y = stoi(x);

	cout << " the character you want " << full.full_name[y] << endl;

	cout << "enter num: " << endl;
	number_string num;
	getline(cin, num.num1);
	cout << "enter num: " << endl;
	getline(cin, num.num2);

	string num1 = num.num1;
	string num2 = num.num2;

	string fsum = num1 + num2;
	cout << " the concatenation of two number is: " << fsum << endl << endl;
	cout << "____________________________________" << endl;
	cout << " the real num: " << endl;
	int sum1 = stoi(num1);
	int sum2 = stoi(num2);
	int sum = sum1 + sum2;
	cout << " the sum of two number is: " << sum << endl;
}