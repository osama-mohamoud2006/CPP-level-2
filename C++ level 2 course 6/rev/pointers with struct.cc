#include <iostream>
using namespace std;

struct stdata
{
    string name = "";
    short age = 0;
};
int main()
{

    stdata data;
    data.name = "osama";
    data.age = 19;

    cout << data.name << endl;
    cout << data.age << endl;

    cout << "\nusing pointers:\n";

    stdata *ptr = &data;
    ptr->name = "Osama22";
    ptr->age = 199;

    cout << (ptr->name) << endl; // will print the data noramally 
    cout << (ptr->age) << endl;
     cout << &(ptr->age) << endl; // will print the address 
}