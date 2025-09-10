#include <iostream>
using namespace std;
void input(int &m) {
	cout << "enter month " << endl;
	cin >> m;

}
void output(int m) {
	if (m == 1) {
		cout << "Jan " << endl;
	}
	else if (m == 2) {
		cout<< "Feb " << endl;
	}
	else if (m == 3) {
		cout << "March " << endl;
	}
	else if (m == 4) {
		cout << "Apr " << endl;
	}
	else if (m == 5) {
		cout << "May " << endl;
	}
	else if (m == 6) {
		cout << "June " << endl;
	}
	else if (m == 7) {
		cout << "July " << endl;
	}
	else if (m == 8) {
		cout << "Agu " << endl;
	}
	else if (m == 9) {
		cout << "Sep " << endl;
	}
	else if (m == 10) {
		cout << "Oct " << endl;
	}
	else if (m == 11) {
		cout << "Nov " << endl;
	}
	else if (m == 12) {
		cout << "Dec " << endl;
	}
	else {
		cout << "wrong month " << endl;
	}
}
int main() {
	int m=0;
	input(m);
	output(m);
}
