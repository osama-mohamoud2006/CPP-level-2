#include <iostream>
using namespace std;
int main() {
	cout << "************************\n";
	/// asssignment 1 with modification

	string name;
	cout << "please enter your name: ";
	cin >> name;
	cout << "my name is: " << name << endl;
	
	short int age;
	cout << "please enter your age: ";
	cin >> age;
	cout << "my age is: " << age << endl;

	string city;
	cout << "please enter your city: ";
	cin >> city;
	cout << "my city is: " << city << endl;

	string country;
	cout << "please enter your country: ";
	cin >> country;
	cout << "my country is: " << country << endl;

	short int salary ;
	cout << "please enter your salary: ";
	cin >> salary;
	cout << "monthly salary is: " << salary << endl;
	short int yearly = salary * 12;
	cout << "yearly salary is:" << yearly << endl;

	char sex ;
	cout << "please enter your gander:" << "\n";
	cin >> sex;
	cout << "gander: " << sex << endl;

	bool married;
	cout << "please enter your marital status: " << "\n";
	cin >> married;
	cout << "married: " << married << endl;
	cout << "************************\n";

	/// asssignment 2
	short int x;
	cout << "enter x: ";
	cin >> x;

    short int y;
	cout << "enter y: ";
	cin >> y;


     short int z;
	cout << "enter z: ";
	cin >> z;

	cout << x << "\n";
	cout << '+' << endl;
	cout << y << "\n";
	cout << '+' << endl;
	cout << z << endl;
	short int sum = x + y + z;
	cout << "************************\n";
	cout << "total= " << sum << endl;

	//// assignment 3
  cout<<"enter your age: "<<endl;
	short int a ;
	cin >> a;
	cout << "after 5 yeaes my age will be: " << a + 5 << endl;

	cout << "the size of short int is: " << sizeof(short int) << endl;
	cout << "the size of int is: " << sizeof(int) <<" " << INT_LEAST32_MIN << endl;
	cout << "the min of doubule range is: " << DBL_MIN<< endl;
	cout << "the max of dbl range is: " << DBL_MAX << endl;
	cout << endl;
	cout << " the size of int is: " << sizeof(int) << endl;
	cout << " the range of int is: " << INT_MIN << "_" << INT_MAX << "\n";

	//// done
}