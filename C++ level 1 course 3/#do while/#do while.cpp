#include<iostream>
using namespace std;
int main(){
	int n;
	int i = 0;
	int arr[10];
	//for (int i = 0; i <= 10-1; i++) {
	//	cout << "enter the the value: " << i << endl;
	//	cin >> arr[i];
	//	if (arr[i] == 20) {
	//		cout << "you got me! " << endl;
	//		break;
	//	}
	//	
	//}

	do {
		cout << "enter the the value: " << i << endl;
		cin >> arr[i];
	} while (arr[i] != 20);
	cout << "you got me! " << endl;

}