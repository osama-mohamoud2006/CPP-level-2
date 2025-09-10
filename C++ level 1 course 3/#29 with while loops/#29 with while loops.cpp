#include <iostream>
using namespace std;
int main() {
	cout << "enter N " << endl;
	int num;
	cin >> num;
	int sum = 0;
	int s = 1;
	while (s<=num) { //10
		
		if (s % 2 == 0) {
       sum += s;
		}
		s++;
		
	}
	cout << sum << endl;
	/*for (int s = 1; s <= num; s++) {
		if (s % 2 == 0) {
			     sum += s;
		}
	}
	cout << sum << endl;*/
}