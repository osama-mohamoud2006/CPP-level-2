#include <iostream>
#include <vector>
using namespace std;
int main(){

vector<int> v{1,2,4,54,56,67,7,8,98,900,0,3};
  vector<int> ::iterator vt;
   for(vt = v.begin(); vt!= v.end(); vt++ )
    cout<<*vt<<" ";
   

  cout<<endl; 
}