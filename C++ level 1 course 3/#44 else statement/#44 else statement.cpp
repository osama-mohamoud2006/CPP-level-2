#include <iostream>
using namespace std;
struct days {
	int d;
};
void input(days& day) {
	cout << "enter the number of day: " << endl;
	cin >> day.d;
}
void ouput(days day) {
	if (day.d == 1) {
		cout << "Sunday " << endl;
	}
	else if (day.d == 2) {
		cout << "Monday " << endl;
	}
	else if (day.d == 3) {
		cout << "Tuesday " << endl;
	}
	else if (day.d == 4) {
		cout << "Wednesday " << endl;
	}
	else if (day.d == 5) {
		cout << "Thursday " << endl;
	}
	else if (day.d == 6) {
		cout << "Friday " << endl;
	}
	else if (day.d == 7) {
		cout << "Saturday " << endl;
	}
	else {
		cout << "wrong day " << endl;
	}
}
int main() {
	days day;
	input(day);
	ouput(day);

}