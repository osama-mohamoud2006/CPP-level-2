#include <iostream>
using namespace std;
int main() {
	cout << "enter number: ";
	int n;
	cin >> n;
	int sum = 0;
	int e = -99;
	while (n > e) {
		sum += n;
		cout << "enter more " << endl;
		cin >> n;
	}
	cout << sum << endl;
}
