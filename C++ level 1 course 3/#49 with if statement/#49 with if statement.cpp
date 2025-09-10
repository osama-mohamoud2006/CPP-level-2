#include <iostream>
using namespace std;
struct info {
	string pin;
};
void input(info &password) {
	cout << "enter your password: " << endl;
	cin >> password.pin;
}
void output(info password) {
	if (password.pin == "1234") {
		cout << "your balance is 7500$ " << endl;
	}
	else {
		cout << "wrong Pin " << endl;
	}
}
int main() {
	info password;
	input(password);
	output(password);
}