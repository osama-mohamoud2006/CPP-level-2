#include <iostream>
#include <cmath>
using namespace std;
int main() {
	cout << "Enter number: " << endl;
	int n;
	cin >> n;
	cout << " enter the power of number: " << endl;
	int m;
	cin >> m;
	int power = pow(2, m);
	cout << "the number " << n << " power " << m << " is " << round(power) ;
}