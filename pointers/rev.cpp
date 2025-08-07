#include <iostream>
using namespace std;
int main()
{
   int *ptr = new int ; // pointer to store var in heap (dynamic memory allocation )
   *ptr = 900; 
   cout<<*ptr<<endl;
   cout<<ptr<<endl;
   delete ptr ; // deallocation 
    
   int * ptr2 = new int ;
   *ptr2 = 100;
   cout<<*ptr2<<endl; 
   delete ptr2 ;  // deallocation 
   
   cout<<"\nenter number of students: ";
    int n ; 
    cin>>n;
   int *pa = new int [n];

   for(int i=0; i<n; i++){
    cout<<"enter grade: "<<i+1<<endl;
    cin>>*(pa+i);
   }
  cout<<"\n____________________________________\n";

     for(int i=0; i<n; i++){
   
    cout<< *(pa+i)<<endl;;
   }
  delete [] pa ;
}