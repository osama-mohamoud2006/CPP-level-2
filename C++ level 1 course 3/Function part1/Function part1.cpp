//#include<iostream>
//#include<string>
//using namespace std;
//
//
//void star1() {
//	cout << "**********" << endl;
//};
//
//void star2() {
//	cout << "  **********" << endl;
//};
//
//void star3() { //just print no return
//	cout << "    **********" << endl;
//};
//
//int addition() {
//	int x = 10;
//	int y = 20;
//	return x + y;
//};
//
//int addition_entered() {
//	cout << "Enter the first number: ";
//	int c;
//	cin >> c;
//
//	cout << "Enter the second number: ";
//	int d;
//	cin >> d;
//	return c + d;
//};
//
//void addition_void() {
//	cout << "Enter the first number(void) : ";
//};
//void addition_void2() {
//	int o;
//	cin >> o;
//	cout << "Enter the second number(void) : ";
//	int p;
//	cin >> p;
//	cout << "The sum of two numbers is: " << o + p << endl;
//};
//	
//
//int main() {
//	star1();
//	
//	
//
//	cout << "The sum of 10 and 20 is: " << addition() << endl;
//	
//	star2();
//	cout << "The sum of two numbers is: " << addition_entered() << endl;
//	star3();
//
//	addition_void();
//
//	addition_void2(); // cannot make operation with it it will execute only the void function
//
//	
//}



#include <iostream>
using namespace std;
//void multiplication() {
//    cout << "enter first number: ";
//    int n1;
//    cin >> n1;
//
//    cout << " enter second num: ";
//    int n2;
//    cin >> n2;
//    int sum = n1 * n2;
//    cout << "the sum is: " << sum << endl;
//    cout << "this code executed from void function you cannot make operation or cout or something else in int main() " << endl;
//};

int addition() {
    cout << "enter a: " << endl;
    int a;
    cin >> a;
    cout << "enter b: " << endl;
    int b;
    cin >> b;
    int sum_add = a + b;
    cout << " the addition is : " << sum_add << endl;
	return sum_add;
};



int main() {
    int test;
    test = 10;
    //  multiplication();
    cout << " this result from return fuction: " << addition() + test << endl;
    system("pause");
}