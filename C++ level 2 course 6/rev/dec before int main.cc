#include <iostream>
using namespace std;
void say_hi(){ // normal function 
    cout<<"say hi! ";
    cout<<endl;
}
// dec
void say_hi2(); 
int sum(int , int );


int main(){
say_hi2();
cout<< sum(3, 1)<<endl;
}

//def
void say_hi2(){
    cout<<'\n';
    cout<<"Hi2"<<endl;
    
}

int sum(int x, int y ){
    return x+y;
}