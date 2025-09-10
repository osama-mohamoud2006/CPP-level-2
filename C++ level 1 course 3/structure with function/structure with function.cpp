#include <iostream>
#include <string>
using namespace std;
struct information {
	string fullname;
	int age;
	string city;
	string country;
	int month_salary;
	string sex;
	bool married;
};
void infofx(information &info) {
	cout << "enter full name: ";
	getline(cin, info.fullname);
	cout << "enter your age: ";
	cin >> info.age;
	cout << "enter your country: ";
	cin >> info.country;
	cout << "enter month salary: ";
	cin >> info.month_salary;
	cout << "enter your gander: ";
	cin >> info.sex;
	cout << "enter your your relation status: ";
	cin >> info.married;
}
void print_infofx(information info) {
	cout << "---------------------------------------------------" << endl;
	cout << "your name is: " << info.fullname << endl;
	cout << "your age is: " << info.age<<endl;
	cout << "your country is: " << info.country << endl;
	cout << "your month salary is: " << info.month_salary << "\n";
	cout << "your year salary: " << info.month_salary * 12 << endl;
	cout << "your sex is: " << info.sex << endl;
	cout << "your married status is: " << info.married << endl;

	cout << "---------------------------------------------------" << endl;

}

int main() {
	information person;
	infofx(person);
	print_infofx(person);
}