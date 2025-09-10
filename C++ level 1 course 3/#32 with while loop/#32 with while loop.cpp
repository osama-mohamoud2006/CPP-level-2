#include <iostream>
using namespace std;
int main() {
	cout << "enter n and m ";
	int n, m;
	cin >> n >> m;
	int i = 0; // 0+1 +1 + 1 +1  i++ == 4
	int multi = 1; // 2*2*2*2
	while (i<m) {
		multi *= n;
		i++;
	}
	cout << n<<"^"<<m << ": " << multi << endl;


	//for (int i = 0; i < m; i++) { 
	//	multi *= n;
	//}
	//cout << n << "^" << m << ": " << multi << endl;
}