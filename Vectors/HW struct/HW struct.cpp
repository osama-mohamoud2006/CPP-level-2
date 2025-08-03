#include <iostream>
#include <vector>
#include <limits>
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
		cout << "enter number: ";
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
	  
	  cout<<"enter age: ";
	  cin>>data_input.age;



}

void fill_vector(vector<stdata> &data){
	int number=0 ;
	do{
		cout<<"How many employes: ";
		number=enter_number();

		for(int i=0; i<number; i++){
			
		}

	}
}



int main() {
	
}