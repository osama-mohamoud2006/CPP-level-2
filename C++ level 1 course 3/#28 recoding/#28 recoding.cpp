#include <iostream>
using namespace std;
void input(int &n) {
	cout << "enter N: " << endl;
	cin >> n;
}
void sum_odd(int n) {
	int sumodd = 0;
	for (int i = 0; i <= 10; i++) {
		if (i % 2 != 0) {
			sumodd += i;
		}
		
	}
	cout << sumodd << endl;
}
int main() {
	int n = 0;
	input(n);
	sum_odd(n);
}