#include <iostream>
using namespace std;
void input(int& n , int &m) {
	cout << "ENTER N: " << endl;
	cin >> n;
	cout << "ENTER M: " << endl;
	cin >> m;
}
//// علي اساس ال ام هيحدد العدد هيتضرب في نفسه كام مره 
/// يعني ام هي متحكمه في لوب
void power(int n, int m) {
	int multi=1;
	
	for (int i = 1; i <= m; i++) {
		multi = multi *n;
		// trtacing 
		/* 1 = multi // multi = 1 *2 ; , multi 2;
		
		* 2 = multi , multi = multi *2; , 2*  2 = 4;
		
		* 3 = multi , multi = 4*2 , multi 8 ;
		* 4 = multi  , nulti = 8*2  , multi 16; 
		*/
		

	}
	cout << "_______________" << endl;
	cout << multi << endl;
}
int main() {
	int n = 0;
	int m = 0;
	input(n, m);
	power(n, m);
}