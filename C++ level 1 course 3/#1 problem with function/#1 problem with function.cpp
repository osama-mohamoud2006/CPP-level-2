#include<iostream>
#include<string>
using namespace std;

void myname() {
	cout << " your name is" << endl;
	string name;
	getline(cin, name);
	cout << "your name is " << name << endl;	
};

string n(string name) {
	return name;
};

int main() {
	cout << "enter your name" << endl;
	string name;
	getline(cin, name);
	cout << "your name is " << n(name) << endl;
	//myname();
	return 0;
	 // P1 and P2 WITH DIFFERENT SOLUTIONS
}
