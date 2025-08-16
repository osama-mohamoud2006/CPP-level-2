#include <iostream>
#include <string>
using namespace std;

void space(string n ,int i=0){
  ////0 1 l=2
    //39 

    // 3
    cout<<n[i]<<" ";
    if(i<n.length()){
       space(n,i+1); // i=2
    }


}
int main(){
    int n ;
    cout<<"\nenter num: ";
    cin>>n;

    string m = to_string(n);
    space(m);
}