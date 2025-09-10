/// this program is for hospital 

#include <iostream>
#include <string>
using namespace std;

struct b_info {
	string status;
	string degree_of_danger;
};

struct address {
	string address;
	string city;
	string zip_code;
	b_info b;
};

struct person {
	string name;
	int age;
	address ad;

};

enum gander {male, female};

int main() {
	person p1;
	p1.name = "Ali";
	p1.age = 45;
	p1.ad.address = "1234 Main St";
	p1.ad.city = "Los Angeles";
	p1.ad.address = "90001";
	p1.ad.b.status = "critical";
	p1.ad.b.degree_of_danger = "high";
	gander sex;
	sex = gander::female;

	cout << "___________________________" << endl;
	cout << "Name: " << p1.name << endl;
		cout << "Age: " << p1.age << endl;
	cout << "Address: " << p1.ad.address << endl;
	cout << "City: " << p1.ad.city << endl;
	cout << "Zip Code: " << p1.ad.zip_code << endl;
	cout << "Status: " << p1.ad.b.status << endl;
	cout << "Degree of Danger: " << p1.ad.b.degree_of_danger << endl;
	cout << "sex " << sex<<endl;
	cout << "___________________________" << endl;
}