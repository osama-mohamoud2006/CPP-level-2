#include <iostream>
using namespace std;

int number_input(){
    cout<<"enter number: ";
    int n =0 ; 
    cin>>n;
   return n ;
}

int sum(){
    return number_input() + number_input() ; 
}
int main(){
    cout<< sum()<<endl;

}
