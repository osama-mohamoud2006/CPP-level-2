#include <iostream>
using namespace std;
void input(int& n) {
	cout << "enter N: ";
	cin >> n;
}
void even(int n) {
	int sum_even = 0;
	for (int i = 0; i <= n; i++) {
		if (i % 2 == 0) {
			sum_even += i;
		}
	}
	cout << "_______________________" << endl;
	cout << sum_even << endl;
}
int main() {
	int n = 0;
	input(n);
	even(n);
}