#include <iostream>
using namespace std;

void power(int n , int m , int sum =1){

    // 4 * 2 * 2
      if(m>0){ // m=3
        power(n,m-1,sum*n);
      }
      else{
        cout<<sum<<endl;
        return ;
      }
}
int main(){
  power(2,4);
}