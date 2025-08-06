#include <iostream>
#include <vector>
using namespace std;
int main(){

    vector <int> v {1,2,3,4,5,6,78,9,0,10};

    // declare iterator 
    vector<int> ::iterator vit ; // acts like pointer 
// walk through elements using iterator 
    for(vit = v.begin(); vit!=v.end(); vit++)
    {
        cout<<*vit<<" ";
    }
  cout<<endl; 
}