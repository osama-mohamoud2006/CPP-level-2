// while better when you use it for condition you donot know how many times it will repeat
// int i = 0;
// while(condition){
// // body of loop
//}
// program to read postive numbers
#include <iostream>
using namespace std;
int main() {
	cout << "enter number (postive only): ";
	int n;
	cin >> n;
	while (n < 0) { /// will repeat itself until conditon becomes true
		cout << "you didnot enter postive number try again: " << endl;
		cin >> n;
	}
	cout << "you entered " << n << endl;
}