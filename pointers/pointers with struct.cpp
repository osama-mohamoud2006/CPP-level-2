#include <iostream>
#include <stdio.h>
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

    stdata *ptrdata = &data ; // like any pointer stdata is data type , *ptrdata is the name of pointer , &data is must as pointer stores the address of var so you should use & with var 
     data.name = "sama";
    data.age = 24 ;
    cout<<"\nusing pointers: \n"  ;
    cout<<ptrdata->name<<endl; // will print value 
    cout<<ptrdata->age<<endl;  // will print value 

       cout<<&(ptrdata->name)<<endl; // will print address 
    cout<<&(ptrdata->age)<<endl;  // will print address 


}