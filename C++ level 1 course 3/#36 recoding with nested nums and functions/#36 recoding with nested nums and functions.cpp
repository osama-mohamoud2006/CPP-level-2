#include<iostream>
#include<cmath>
using namespace std;
enum enop{addtion=1 , subtraction=2 , divison =3 , mod=4 , multiplication=5 };
void print() {
	cout << "please select one of the following operations\n";
	cout << "1-Addtion\n2-Subtraction\n3-Divison\n4-Mod \n5-multiplication \n" ;
	cout << "-------------------------------------" << endl;
}
enop select_operation() {
	int z;
	cin >> z;
	return (enop)z;
}

void input(double &x, double &y) {
	cout << "enter first term " << endl;
	cin >> x;
	cout << "enter second term " << endl;
	cin >> y;
	cout << "-------------------------------------" << endl;
	
}            //// inputs nums from the user


double output( enop op , double x , double y ) {
	input(x, y);
	switch (op) {
		
	case enop::addtion:
		return x + y;
	case enop::subtraction:
		return x - y;
	case enop::divison:
		return x / y;
	case enop::mod:
		 return fmod(x, y);
	case enop::multiplication:
		return x * y;

	default:
		cout << "invalid operation" << endl;
		return 0;

	}

}
int main() {
	print();
	enop op;
	double x=0;
	double y=0;
	
	cout << "the result of the operation " << output(select_operation(), x, y);
	

}