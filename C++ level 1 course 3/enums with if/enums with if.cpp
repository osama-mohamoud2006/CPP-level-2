#include<iostream>
using namespace std;
enum classes {
	Ai = 1, Bussiness = 2, Enginnering = 3
};
void print() {
	cout << "choose your faculty from these numbers :" << endl;
	cout << "1.Ai " << endl;
	cout << "2.Business " << endl;
	cout << "3.Enginnering " << endl;
	cout << "---------------------------" << endl;
}
void input (classes & departments){
	cout << "enter number of class ";
	int x;
	cin >> x;
	(classes)x;
	if (x == classes::Ai) {
		cout << "this is Ai faclty  " << endl;
		cout << "welcome to Eru " << endl;
	}
	else if (x == classes::Bussiness) {
		cout << "this is Business faculty "<<endl;
		cout << "welcome to Eru " << endl;
	}
	else if (x == classes::Enginnering) {
		cout << "this is Enginnering faculty " << endl;
		cout << "welcome to Eru " << endl;
	}
	else {
		cout << "this input isn't listed" << endl;
	}
}
int main() {
	classes departments;
	print();
	input(departments);
}