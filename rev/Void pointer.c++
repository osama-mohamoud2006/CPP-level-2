#include <iostream>
using namespace std;
struct stdata
{
    string name = "";
    short age = 0;
};
int main()
{
    void *ptr;
     stdata data;
    int x =200 ; 
    ptr = &x ; 

    cout<<ptr<<endl; // will print th address of x 
    // cout<<*ptr<<endl; // error you cann't derferencing void pointer 

     cout<<*(static_cast<int*>(ptr))<<endl; // will print the value 

     float y = 19.23; 
     ptr = & y ; // pointer now points to the  y (float data type )
     cout<<ptr<<endl; // will print th address of y 
     cout<<&y<<endl; // will print th address of y

     cout<<*(static_cast<float*>(ptr))<<endl;// will print the value of y 




    
}