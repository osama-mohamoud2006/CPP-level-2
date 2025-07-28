#include <iostream>
#include <string>
using namespace std;
// used input validition
// function overload
// default parameter
// declration  of function above int main() 

struct student_data {
	string name="";
	short age=0;
	float grade1=0.0;
	float grade2 = 0.0;
	float grade3 = 0.0;
};

struct st_total_data {
	student_data student_data[10];
	
};
string input_name();
short input_age();
float input_grade();
st_total_data fill_data(int lenght=1) {
	st_total_data data;

	for (int i = 0; i < lenght; i++) {

		data.student_data[i].name=input_name();
		data.student_data[i].age = input_age();
		data.student_data[i].grade1 = input_grade();
		data.student_data[i].grade2 = input_grade();
		data.student_data[i].grade3 = input_grade();
	}
	return data;

}
void final_output(st_total_data , int length=1);
void final_output(st_total_data, bool , int length=1);

void start() {
	bool pass = false;
	st_total_data fdata =  fill_data(2);
	cout << "enter what do you want student name only and age or student name and grade? ";
	int c = 0;
	do {
		cout << "\n[1] for first option" << "\n" << "[2] for second option: ";
		cout << endl;
		cin >> c;
		if (cin.fail()) {
			cin.clear();
			cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
			cin >> c;
		}
	} while (c < 1 || c>2);

	if (c == 1) {
		cout << "\n";
		final_output(fdata,2);

	}
	else if(c==2){
		cout << "\n";
		final_output(fdata, pass,2);
	}
}

int main() {

	start();

}

string input_name() {
	
	cout << "\nenter name: ";
	string n;
	cin >> n;
	return n;
}
short input_age() {
	short age = 0;
	cout << "\nenter age of student: ";
	cin >> age;
	if (cin.fail()) {
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		cout << "\n enter age agian: ";
		cin >> age;
	}
	return age;
}
float input_grade() {
	float grade = 0;
	cout << "\nenter grade of student: ";
	cin >> grade;
	if (cin.fail()) {
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		cout << "\n enter age agian: ";
		cin >> grade;
	}
	return grade;
}

void final_output(st_total_data fdata , int length) {

	for (int i = 0; i < length; i++) {
		cout << "the name: " << fdata.student_data[i].name << endl;
		cout << "the age: " << fdata.student_data[i].age << endl;
	}
}
void final_output(st_total_data fdata, bool pass , int length) {

	for (int i = 0; i < length; i++) {
		cout << "student name " << fdata.student_data[i].name << endl;
		float avg = ((fdata.student_data[i].grade1 + fdata.student_data[i].grade2 + fdata.student_data[i].grade3) / 3);
		cout << "the avg: " << avg << endl;
		if (avg > 50) cout << "student passed! \n\n";
		else cout << "bitch bad! " << endl;

	}
}