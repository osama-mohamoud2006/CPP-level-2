#include<iostream>
#include <cmath>
using namespace std;
int main() {
	float a, b, c;
	cout << " enter \'a\',\'b\' \'c\':";
	cin >> a >> b >> c;

	const float pi = 3.14;
	float p = (a + b + c) / 2;
	float area = pi * pow( (a*b*c)/(4*sqrt( p*(p-a)*(p-b)*(p-c) ))  , 2);
	cout << " the area is : " << round(area);
}