// 5! = 5*4! , 4!=4*3*2*1
#include<iostream>
using namespace std;

void factorial (int n ,int s=1 ){
       // n*(n-1)*(n-2)*(n-3)
       if(n>0){
        factorial ( n-1 , s*=n );
       }
       else{
        cout<<s<<endl;
        return ;
       }
}
int main(){
     factorial (4);
}