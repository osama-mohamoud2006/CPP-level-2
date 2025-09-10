#include <iostream>
using namespace std;
struct info {
	short int age;
	string drive;
};
void inputs(info& qualification) {
	cout << "enter your age: " << endl;
	cin >> qualification.age;
	cout << "do you have drive linece? " << endl;
	cin >> qualification.drive;
}
void if_state(info qualification) {
	if (qualification.age >= 21 && qualification.drive == "true") {
		cout << "you are hired ! " << endl;
	}
	else {
		cout << "nah go to hell bro !" << endl;
	}
}

int main() {
	info driver;
	inputs(driver);
	if_state(driver);
}