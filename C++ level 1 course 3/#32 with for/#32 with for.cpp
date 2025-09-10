#include <iostream>
using namespace std;
void input(int &num, int &m) {
	cout << "enter number " << endl;
	cin >> num;
	cout << "enter power " << endl;
	cin >> m;
	
}
int loop(int num, int m) {
	int result = 1;
	for (int i = 1; i <= m; i++) {
		result *= num;
		
		
	}
	
	return result;
}
int main() {
	int num = 0;
	int m = 0;
	 input (num , m) ;
	cout << loop(num ,m )  << endl;
 }







// 2 pow 4 = 2*2*2*2