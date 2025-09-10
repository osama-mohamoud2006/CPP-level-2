#include <iostream>
using namespace std;

void to_n(int n=1 ){
    if(n!=0){
        cout<<n<<' ';
      to_n(n-1);
    }
}
int main(){
    int n ;
    cin>>n;
    to_n(n);
}