#include <iostream>
using namespace std;

void print_1_to_n(int n , int c=1){
    if(c>n) return;
       
        cout<<c<<endl;
        print_1_to_n( n ,  c+1);
       
}

int main(){
      int n ;
      cin>>n;
      print_1_to_n(n);
}
