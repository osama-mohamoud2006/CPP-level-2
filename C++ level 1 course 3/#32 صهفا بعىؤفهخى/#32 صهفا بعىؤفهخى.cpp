#include<iostream>
#include <cmath>
using namespace std;
int num(int n) {
	return n ;
};
int num(int n, int m) {
	int power = pow(n, m);
	return power;
};
int main() {
	int n, m;
	cin >> n >> m;
	cout << num(n) << endl;
	cout << num(n, m) << endl;
	return 0;
}