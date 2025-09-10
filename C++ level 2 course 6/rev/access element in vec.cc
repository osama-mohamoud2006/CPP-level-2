#include<vector>
#include <iostream>
using namespace std;

int main(){
    vector<int>v{1,3,5,65,67,78,4};

    cout<<v.at(0)<<endl;
     cout<<v.at(1)<<endl;
      cout<<v.at(2)<<endl;
       cout<<v.at(3)<<endl;
        cout<<v.at(4)<<endl;
         cout<<v.at(5)<<endl;
          cout<<v.at(6)<<endl;
          // cout<<v.at(7)<<endl; // --> will throw exception 
cout<<endl;
             cout<<"safe access method: "<<endl; 
           for(int i=0; i<v.size(); i++){
            cout<<v.at(i)<<" "; // ---> access method
           }
cout<<endl;

        cout<<endl;
        cout<<"supcript method:"<<endl;
        for(int i=0; i<v.size(); i++){
            cout<<v[i]<<" ";  // --> subscript operator
           }
cout<<endl;

///  cout<<v[7]<<endl; // --> crash or corrupt data , print garbage 

}