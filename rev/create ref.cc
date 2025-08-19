#include <iostream>
using namespace std;
void x2(int y){
    y++;
}
void x3(int &y){
    y++;
}
int main(){
    // create ref 
    int a=10; 
    int &x= a ; // ref of a (alies name) have the same value,address of a
    cout<<x<<endl;
    cout<<a<<endl;
    x2(a);//will copy the value of a ,
    // and will create new var -y- (diff address , 
    //the same value , local change )
    cout<<a<<endl;

    x3(x); // the a , y will be the same address , the same value , so 
    // any changes happen to a will affect y and any affect on y 
    // will affect on a (&y=a )
     cout<<a<<endl;
     a=100; 
      cout<<x<<endl;
}