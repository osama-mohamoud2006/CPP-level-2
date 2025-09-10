#include <iostream>
using namespace std;

int days(int d) {
	return d * 24 * 60 * 60;
};

int hours(int h) {
	return h * 60 * 60;
};

int minutes(int m) {
	return m * 60;
};

int seconds(int s) {
	return s;
};
int total(int d, int h, int m, int s) {
	int total = days(d) + hours(h) + minutes(m) + seconds(s);
	return total;	
};
int main() {
	int d, h, m, s;
	cout << "Enter days: ";
	cin >> d;
	cout << "Enter hours: ";
	cin >> h;
	cout << "Enter minutes: ";
	cin >> m;
	cout << "Enter seconds: ";
	cin >> s;
	cout << "total seconds is : " << total(d, h, m, s)<<endl;

}