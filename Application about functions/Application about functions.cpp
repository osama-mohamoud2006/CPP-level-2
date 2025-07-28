#include <iostream>
#include <string>
using namespace std;

//	- Uses a structure(struct) to group the student's data together. done 
//	-Stores each student's name, age, and grades. done

//	- Uses arrays to store the student's three grades.
//	- Uses function overloading to :
//---- - Print only the name and age.
// 
//---- - Print the name and the average grade.
//---- - Print a list of all student names when you have multiple students.



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

float input_grade( ) {
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

st_total_data fill_data() {
	st_total_data data;

	for (int i = 0; i < 5; i++) {

		data.student_data[i].name=input_name();
		data.student_data[i].age = input_age();
		data.student_data[i].grade1 = input_grade();
		data.student_data[i].grade2 = input_grade();
		data.student_data[i].grade3 = input_grade();
	}
	return data;

}



void final_output(string array_store[10], short age[10]) {
	for (int o = 0; o < 10; o++) {
		cout << "the student name: " << array_store[o];
		cout << " " << "the student age: " << age[o] << endl;
	  }
}
void final_output(string array_store[10],  float grades[10]) {
	for (int o2 = 0; o2 < 10; o2++) {
		cout << "student name " << array_store[o2] << endl;
		cout << "and its avg grades: " << grades[o2] << endl;
	}
}

void start(string array_store[10], short age[10], float grades[10]) {
	st_total_data fdata;
	fill_data();

	
		
		for (int i = 0; i < 5; i++) {
			cout << fdata.student_data[i].name << endl;
			cout << fdata.student_data[i].age << endl;
			cout<<((fdata.student_data[i].grade1 + fdata.student_data[i].grade2 + fdata.student_data[i].grade3) / 3)<<endl;

	
	}
	

	cout << "enter what do you want student name only and age or student name and grade? ";
	int c = 0;
	do {
		cout << "\n[1] for first option" << "\n" << "[2] for second option: ";
		cin >> c;
		if (cin.fail()) {
			cin.clear();
			cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
			cin >> c;
		}
	} while (c < 1 || c>2);

	if (c == 1) {

		final_output(array_store, age);

	}
	else if(c==2){
		final_output(array_store, grades);
	}
}

int main() {
	string array_store[10];
	short age[10]; 
	float grades[10];
	start(array_store, age, grades);

}

