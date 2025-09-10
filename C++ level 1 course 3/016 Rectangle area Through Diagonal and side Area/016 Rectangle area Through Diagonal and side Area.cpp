#include <iostream>
#include <cmath>
using namespace std;
int main(){
	float a;
	cout<< "enter \"a\": ";
	cin >> a;

	float d;
	cout << " enter \" d\": ";
	cin >> d;
	float area = a*( sqrt( pow(d, 2) - pow(a,2) ) );
	cout << "the area is: " << area;

}