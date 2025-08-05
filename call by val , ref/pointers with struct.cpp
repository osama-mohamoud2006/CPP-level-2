#include <iostream>
using namespace std;

struct stdata{
    string name =  "";
    short age = 0 ; 
};

int main()
{
    stdata data; // normal struct defination
    data.name = "osama";
    data.age = 19 ;
    cout<<data.name<<endl;
    cout<<data.age<<endl;

    

}