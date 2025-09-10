#include <iostream>
#include <cmath>
using namespace std;
int main() {
	cout << "enter a: ";
	int a;
	cin >> a;

	const float pi = 3.14;
	double area = pi * ((a / 2) * (a / 2));
	cout << "area " << ceil(area);

}