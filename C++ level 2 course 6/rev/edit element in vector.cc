#include<vector>
#include <iostream>
using namespace std; 
int main(){
    vector<int>v{1,3,5,65,67,78,4};
    // change element in vector using .at (SAFE ACCESS METHOD)

    v.at(0)=0; // changed '1' to '0'

 cout<<endl;
    for(auto x: v){
        cout<<x<<" ";
    }

 cout<<endl;

 // subscript operator 
     v[0]=1;

      cout<<endl;
    for(auto x: v){
        cout<<x<<" ";
    }

 cout<<endl;


       cout<<endl;
    for(auto x: v){
        x=10;
        cout<<x<<" ";
    }

 cout<<endl;
}