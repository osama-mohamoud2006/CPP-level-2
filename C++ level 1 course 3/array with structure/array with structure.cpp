#include <iostream>
#include<string>
using namespace std;
struct info {
	string name;
	int age;
	int id;
};
void input(info& data) {
	cout << "enter name: ";
	cin >>data.name;	
	cout << "enter age: ";
	cin >> data.age;
	cout << "enter id: ";
	cin >> data.id;
}
void output(info data) {
	cout << "name: " << data.name << endl;
	cout << "age: " << data.age << endl;
	cout << "id: " << data.id << endl;
}
void no_of(info data[500] , int &length) {
	
	cout << "enter the number of persons you wanna: ";
	cin >> length;
	for (int i = 0; i <= length - 1; i++) {
		cout << "person " << "[" << i + 1 << "]" << endl;
		input(data[i]);
		cout << "-----------------" << endl;
	}
}
void f_output(info data[500], int length ) {
	for (int i = 0; i <= length - 1; i++) {
		cout << "person " << "[" << i + 1 << "]" << endl;
		output(data[i]);
		cout << "-----------------" << endl;
	}
}
int main() {
	info data[500];
	int length = 1;
	no_of(data, length);
	f_output(data , length );
}

//#include <iostream>
//using namespace std;
//struct dataa {
//	int x;
//	int y;
//	int arr[100];
//	int length;
//};
//void input(dataa &info ){
//	cout << "enter the number of persons you wanna: ";
//	cin >> info.length;
//	for (int i = 0; i <= info.length - 1; i++) {
//		cout << "enter data for person " << "[" << i + 1 << "]" << endl;
//		cin >> info.arr[i];
//	}
//	cout << "-----------------" << endl;
//}
//void output(dataa info) {
//	
//	for (int i = 0; i <= info.length - 1; i++) {
//	
//		cout << info.arr[i] << endl;
//	}
//}
//int sum(dataa info) {
//	int sum = 0;
//	for (int i = 0; i <= info.length - 1; i++) {
//
//		sum+= info.arr[i];
//	}
//	return sum;
//}
//int main(){
//	dataa amogous;
//	input(amogous);
//	output(amogous);
//	cout<<"the sum is: "<< sum(amogous);
//}