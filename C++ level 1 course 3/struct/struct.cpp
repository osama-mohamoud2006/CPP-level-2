# include <iostream>
# include <string>
using namespace std;


struct contactinfo {
	string address;
	string city;
	long int phone;
};

struct g_info {

	int year;
	int id;
	contactinfo info;
};

struct student {
	string fname;
	string lname;
	g_info g;
	
};

enum {Elsharkya , Bader , forienger};

int main() {
	 /////struct student 
	student s1;
	s1.fname = "osama";
	s1.g.year = 2023;
	s1.g.id = 24164;
	s1.g.info.address = "10th of ramdan";
	s1.g.info.city = "sharkya";
	s1.g.info.phone = 1121443796 ;

	cout << "__________________________" <<"\n" << endl;
	cout << "name: " << s1.fname <<" " <<s1.lname<< endl;
	cout << "joined at: " << s1.g.year << endl;
	cout << "id: " << s1.g.id << endl;
	cout << "address: " << s1.g.info.address << endl;
	cout << "city: " << s1.g.info.city << endl;
	cout << "phone: " << s1.g.info.phone << endl;
	cout << "__________________________" << "\n" << endl;

	
}
