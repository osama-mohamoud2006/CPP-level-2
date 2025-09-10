#include <iostream>
using namespace std;
int main() {
	int l = 64;
	
	for (int i = 65; i <= 90; i++)
	{
		cout << "current letter " << char(i) << endl;
		l = i;
		for (int j = 65; j <= 90; j++) {
			cout << char(i) << char(j) << endl;
		}
		
		cout << "-------------" << endl;
	}
}