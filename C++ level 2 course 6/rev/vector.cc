#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int>vnums{1,2,3,4,5,6};


    for(int &c : vnums){ cout<<c<<" ";}//--> ranged for loop 
cout<<endl;
    for(int i=0; i<vnums.size(); i++){ // --:> index
        cout<<vnums[i]<<" ";
    }
}