#include <iostream>
using namespace std;
 
int sum(){
     int n = 0; 
     // the value will be 1 as the the var life time ends when funtion call end , so it will be intialied 
     // every time i call the function 
     n++;
    return n;
}

int main(){
    cout<<sum()<<endl;
   cout<<sum()<<endl;
    cout<<sum()<<endl;
}