// program to view students data according to user's choice
#include <iostream>
#include"E:\projects\my library\AllStuff.h"  
using namespace std;
using namespace AllStuff;

enum enchoice{students_name=1 , students_id=2 , students_age=3 };

enchoice choice();

int main() {
	int choice = 0;
}

enchoice choice() {
	short c = 0;
	bool ok = false; 
	do {
		cout << "enter what you want to view [1] students name , [2] students id , [3] students age: ";
		cin >> c;
		if (cin.fail()) {
			cin.clear();
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
	} while (ok == false);
}
