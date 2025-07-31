// cin >> with auto var
// var store text 
// ranged loop

#include <iostream>
#include <string>
using namespace std;
using namespace std::string_literals;

 
	void CPlusPlusVersion() {

		cout << "C++ Version: " << __cplusplus << endl;
		if (__cplusplus == 201703L) {
			cout << "C++17" << endl;// 201703L | C++17
		}
		else if (__cplusplus == 201402L) {
			cout << "C++14" << endl;// 201402L | C++14  
		}
		else if (__cplusplus == 201103L) {
			cout << "C++11" << endl;//201103L | C++11   
		}
		else if (__cplusplus == 199711L) {
			cout << " C++98 / C++03" << endl;// 199711L | C++98 / C++03
		}
		else {
			cout << "Unknown C++ version" << endl;
		}

	}

int main(){

  CPlusPlusVersion();
  

}