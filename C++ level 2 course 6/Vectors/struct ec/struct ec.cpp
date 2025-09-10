#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

// struct 
struct stdata{
	string first_name = "";
	string last_name = "";
	short age = 0;
	short salary = 0; 

};

int main() {
	stdata data;
	// vector 
	vector<stdata> vtotal;

	// fill struct 
	data.first_name = "Aya";
	data.last_name = "Ahmed";
	data.salary = 1000;
	data.age = 19;

	// push struct data to vector 
	vtotal.push_back(data);

	data.first_name = "Ahemd";
	data.last_name = "mhmed";
	data.salary = 6000;
	data.age = 30;
	vtotal.push_back(data);

	data.first_name = "Mrwan";
	data.last_name = "Eyd";
	data.salary = 10000;
	data.age = 56;
	vtotal.push_back(data);

	// output vector . vector's data type is struct 
	for (stdata &print : vtotal)
	{
		cout << "first name: "  << print.first_name << endl;
		cout << "last name: "  << print.last_name<<"\n";
		cout << "age: "  << print.age << endl;
		cout << "salary: "  << print.salary << "\n";

		cout << endl;
	}


}
