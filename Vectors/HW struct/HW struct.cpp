#include <iostream>
#include <vector>
#include <limits>
#include <iomanip>
using namespace std;

struct stdata{
    string first_name = "";
    string last_name = "";
    short age = 0 ;
    short salary = 0 ;
};

int enter_number(){
	short number=0 ;
	do {
		
		cin >> number;
		if (cin.fail() || number < 0) {
			cin.clear();
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			cout << "\n enter number: ";
			cout << "\a";
			cin >> number;
		}
	} while (cin.fail() || 0 > number);
	return number;
}

stdata fill_struct_data(){
	stdata data_input;
     cout<<"\nenter first name: ";
       cin>>data_input.first_name;

      cout<<"\nenter last name: ";
	  cin>>data_input.last_name;
	  
	  cout<<"\nenter age: ";
	  cin>>data_input.age;

	  cout<<"\nenter salary: ";
	  cin>>data_input.salary;

   return data_input;

}

void fill_vector(vector<stdata> &vdata){
	char choice = 'y';
	int number=0 ;
	do{
		cout<<"How many employes: ";
		number=enter_number();

		for(int i=0; i<number; i++){
			vdata.push_back( fill_struct_data());
		}

           cout<<"\n do you want to add another employes? ";
		   cin>>choice;
	}while(choice=='y'||choice=='Y');
}

void vprint (vector<stdata> &vdata)
{
	cout<<"\t"<<"\n"<<"employes data"<<endl;
	cout<<"\n_______________________________________________________________\n"<<endl;

	for(stdata print :vdata ){

		cout<<"first name: "<<print.first_name<<setw(2)<<"|"<<endl;
		cout<<"last name: "<<print.last_name<<setw(2)<<"|"<<endl;
		cout<<"age: "<<print.age<<setw(2)<<"|"<<endl;
		cout<<"salary: "<<print.salary<<setw(2)<<"|"<<endl;
		cout<<"\n________________________________________________\n\n";
	}

	cout<<"\n_______________________________________________________________\n"<<endl;
}


int main() {

	vector<stdata> vdata;
	fill_vector(vdata);
	vprint(vdata);
}