#include <iostream>
#include <cmath>
using namespace std;
int fa(int a) {
	return a;
};
int fd(int d) {
	return d;
};
double area(int a, int d) {
	double diagnoal = a * sqrt(pow(d, 2) - pow(a, 2));
	return diagnoal;
}

int main() {
	int a, d;
	cout << "Enter the value of a: ";
	cin >> a;
	cout << "Enter the value of d: ";
	cin >> d;

	cout << "the area of rectangle is: " << (area(a, d) ) << endl;
	return 0;
}