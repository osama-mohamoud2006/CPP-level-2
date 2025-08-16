#include <iostream>
using namespace std;
int sum(int a=0, int b=0){ // r to l 
return a+b;
}
// dec
int sum2(int a=0 , int b=0  ); // def para in dec is better 


int main(){
    // def value 
    //int c = 10; // compiler uses default value if the failure happened
    //cout<<"\nenter c: ";
    //cin>>c;
    //cout<<c<<endl;
    cout<< sum(2)<<endl;
     cout<< sum2(10)<<endl;
    

}
int sum2(int a , int b  ){ // you cann't use def para again !
    return a+b; 
}