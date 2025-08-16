#include <iostream>
using namespace std;



void sum2( int &n1 , int &n2){
   n2= ( n2*10) ;
   n1 = (n1*10);
}

int main(){
    int n1 =5 ;
    int n2 =10 ;
     sum2(  n1 ,  n2);
      cout<<n1<<endl;
     cout<<n2<<endl;
     cout<<&n1<<endl;
     cout<<&n2<<endl;

}