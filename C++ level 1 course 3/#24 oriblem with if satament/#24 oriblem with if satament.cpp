#include <iostream>
using namespace std;
struct data {
	 int age;
};
void input(struct data &info) {
	cout << "enter your age: " << endl;
	cin >> info.age;
}
void output(struct data info) {
	
	if (45>=info.age &&info.age>=18) {
		cout << "vailed age " << endl;

	}
	else {
		cout << "invaild age " << endl;
	}
}
int main() {
	struct data age;
	input(age);
	output(age);
}