#include <iostream>
using namespace std;
int main() {

	cout << "enter the firt number" << endl;
	short int num1;
	cin >> num1;

	cout << "enter the second number: " << "\n";
	short int num2;
	cin >> num2;
	//////////////
	// num=num1+num2 === num1+=num2
	/*  num should be defined as normal
	* int sum= a+b;
	* int a=a+b;
	* a+=b;
	* int a=a-b;
	* a-=b
	*/
	num1 += num2;
	cout << "The sum of the two numbers is: " <<num1<<endl;
	num1 -= num2;
	cout << "the difference between 2nums is: " << num1 <<"\n";
	num1 *= num2;
	cout << "the multiplication of 2 nums is: " << num1 <<endl;
	num1 /= num2;
	cout << " the division of 2 nums is: " << num1 <<"\n";
	num1 %= num2;
	cout << "the reminder of 2 nums is: " << num1 <<endl;


}