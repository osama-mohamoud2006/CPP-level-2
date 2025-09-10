#include <iostream>
using namespace std;
void input(int &n) {
	cout << "enter N: " << endl;
	cin >> n;
}
void loop(int n) {
	for (int i = 1; i <= n; i++) {
		cout << i << endl;
}
}
int main() {
	int n=0;
	input(n);
	loop(n);
}