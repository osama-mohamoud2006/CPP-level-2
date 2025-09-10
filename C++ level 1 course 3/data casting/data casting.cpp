#include <iostream>
#include <string>
using namespace std;

int main() {
	string st1 = "48.22";
	cout << " string to double: " << stod(st1) << endl;
	cout << "string to float: " << stof(st1) << endl;
	cout << "string to int: " << stoi(st1) << endl;

	int n1 = 20;
	cout << "int to string: " << to_string(n1) << endl;

	double n2 = 33.5;
	cout << " double to string: " << to_string(n2) << endl;

	float n3 = 55.23;
	cout << "float to string: " << to_string(n3) << endl;
	cout << "float to int: " << int(n3) << endl;


	//// ////
	cout << "\n" << endl;
	cout << "another way to covert from float to int: " << endl;
	int i;
	n3;
	i = n3; // implicit conversion
	cout << "float to int: " << i << endl;
}	