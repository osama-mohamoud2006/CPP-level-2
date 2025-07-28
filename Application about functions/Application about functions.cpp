// program to view students data according to user's choice
#include <iostream>
#include"E:\projects\my library\AllStuff.h"  
using namespace std;
using namespace AllStuff;

enum enchoice{students_name=1 , students_id=2 , students_age=3 };
enchoice choice();

void array_data(enchoice type);


void final_output(enchoice needed);
int main() {
	
	final_output(choice());
}

// application on cin failure 
enchoice choice() {
	short c = 0;
	bool ok = false; 
	do {
		cout << "enter what you want to view [1] students name , [2] students id , [3] students age: ";
		cin >> c;
		if (cin.fail()) {
			cin.clear();
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			system("color 4F"); //red
			cout << "\a";
		}
		else if (c < 1 || c>3) {
			cout << "\out of range! ";
			system("color 4F"); //red
			cout << "\a";
		}
		else {
			ok = true; 
		}
	} while (ok == false);
	system("color 0F"); //rest color 
	return (enchoice)c;
}

//overloading function 
void array_data(enchoice type) {

}


void final_output(enchoice needed) {
	switch (needed) {
	case enchoice::students_name:

	case::enchoice::students_id:

	case::enchoice::students_age:

	}
}