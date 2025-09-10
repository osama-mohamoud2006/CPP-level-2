#include <iostream>
using namespace std;
struct info {
	int grade;
};
void input(info& grades) {
	cout << "enter grade :" << endl;
	cin >> grades.grade;
}
void output(info grades) {
	if (100 >= grades.grade && grades.grade >= 90) {
		cout << "grade A " << endl;
	}
	else if (grades.grade >= 80 && grades.grade <= 89) {
		cout << "grade B " << endl;
	}
	else if (grades.grade >= 70 && grades.grade <= 79) {
		cout << "grade C " << endl;
	}
	else if (grades.grade >= 60 && grades.grade  <= 69) {
		cout << "grade D " << endl;
	}
	else if (grades.grade >= 50 && grades.grade <= 59) {
		cout << "grade E " << endl;
	}
	else {
		cout << "grade E " << endl;
	}
}
int main() {
	info grades;
	input(grades);
	output(grades);
}