
// cin >> with auto var
// var store text 
// ranged loop

#include <iostream>
#include <string>
using namespace std;
using namespace std::string_literals;

int main(){

   //auto x = 990; // int 
   auto text = "helllo"s; // string
   // Ranged loop
   for(auto c : text){
    cout<<c<<" ";
    cout<<"\a";
    system("color 4f");
   }  
cout<<endl;
   ///////////////////////////////////////////////////////////////////////
   auto ce = 9.89 ; // double , you should intialize the var if you want to use " cin>> "
   // you can use auto and cin>> what ever 
   cout<<"modify: ";
   //cin>>ce;
   cout<<ce<<endl;

}