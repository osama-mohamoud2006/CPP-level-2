#include <iostream>
using namespace std;
struct strinfo {
	string name;
	int age;
	int id;
};
void input(strinfo& info) {
	cout << "enter your name: ";
	cin >> info.name;
	cout << "enter age: ";
	cin >> info.age;
	cout << "enter id: ";
	cin >> info.id;
}
void output(strinfo& info) {
	cout << "you name is " << info.name << endl;
	cout << "youe age is " << info.age << endl;
	cout << "your id is " << info.id << endl;
}
void no_input(strinfo info[20], int &length) {
	cout << "enter the no of persons: ";
	cin >> length;
	for (int i = 0; i <= length - 1; i++) {
		input(info[i]);
		cout << "--------------------------------------" << endl;
	}
}
void no_output(strinfo info[20], int length) {
	cout << "--------------------------------" << endl;
	for (int i = 0; i <= length - 1; i++) {
		output(info[i]);
		cout << "--------------------------------------" << endl;
	}
}
int main() {
	strinfo info[20];
	int length = 0;
	no_input (info,  length);
	
	no_output(info, length);
}