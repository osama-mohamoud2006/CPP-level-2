#include <iostream>
using namespace std;
float readnum(string message ) {
	float v;
	do {
		cout << "enter " << message << endl;
		cin >> v;

	} while (0 >= v);
	return v;
}
float months(float loanamount , float monthlyloan) {
	return  loanamount / monthlyloan;
}
int main() {
	float loanamount = readnum("enter the loan amount: ");
		float monthlyloan = readnum("enter the monthly amount: ");
		cout << "------------------------------------------------------" << endl;
		cout << "you will pay untill " << months(loanamount, monthlyloan)<<" months";
}