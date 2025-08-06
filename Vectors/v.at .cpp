#include <iostream>
#include <vector>
using namespace std; 
int main()
{
  vector<int> v{1,2,3,4,5,6,7,8,9,10};
cout<<"\nusing .at()\n";
for(int i=0; i<v.size(); i++){
    cout<<v.at(i)<<endl;
}
cout<<"\n_________________________"<<endl;
  cout<<v.at(0)<<endl;
  cout<<v.at(1)<<endl;
  cout<<v.at(3)<<endl;
 //cout<<v.at(11)<<endl; // exception out of range 

  cout<<"\n\nusing noraml index\n";
  for(int i=0; i<v.size(); i++){
    cout<<v[i]<<endl;
}
cout<<"\n_________________________"<<endl;
  cout<<v[0]<<endl;
       cout<<v[2]<<endl;
        cout<<v[3]<<endl;
         cout<<v[4]<<endl;
      //    cout<<v[12]<<endl;


      vector <int > v2{10,20,30,50};
      
      cout<<"\n\n before updating: \n";
      for(const int & i : v2){
        cout<<i<<" ";
      }
      cout<<endl;

        cout<<"\n\n after making all elements 20: \n";
      for( int & i : v2){
        i =20 ; 
        cout<<i<<" ";
      }
        cout<<endl;

        // edit element 
        // using .at // 
        v2.at(0) = 5;// edited index 0 
        v2.at(1)=10;  // edited index 1
          cout<<"\n\n after editing some elements using .at: \n";
      for(const int & i : v2){
         
        cout<<i<<" ";
      }
        cout<<endl;
          
        // using index 
        v[2]=15;
        v[3]= 24;
        

            cout<<"\n\n after editing some elements using index: \n";
      for(const int & i : v2){
         
        cout<<i<<" ";
      }
        cout<<endl;


}