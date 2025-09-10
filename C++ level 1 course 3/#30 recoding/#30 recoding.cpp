#include <iostream>
using namespace std;
void input(int& n) {
	cout << "ENTER N: " << endl;
	cin >> n;
}
void factorial(int n) {
	/// 6!=6*5*4*3*2*1
	int fac = 1;
	for (int i = 1; i <= n; i++) {
		fac *= i;
	}
	cout << "____________" << endl;
	cout << fac << endl;
}
int main() {
	int n = 0; 
	input(n);
	factorial(n);
}