#include <iostream>
using namespace std;
int main() {
	for (int i = 1; 10 >= i; i++) {
		for (int j = 1; i >= j; j++) {
			cout << j << " ";
		}
		cout << endl;
	}

}