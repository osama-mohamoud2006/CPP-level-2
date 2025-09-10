#include <iostream>
using namespace std;
int main() {
	cout << "enter 3 marks to get the avg of them: ";
	short m1, m2, m3;
	cin >> m1 >> m2 >> m3;
	short int avg = (m1 + m2 + m3) / 3;
	cout << "the avg is " << avg << endl;
}