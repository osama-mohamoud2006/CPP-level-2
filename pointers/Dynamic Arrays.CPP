#include <iostream>
using namespace std;

int main(){

    // static arry cann't change length in runtime
    const int l =100; 
    int arr[l];

    cout<<"enter number of students: ";
    int n =0;
    cin>>n ; 
// memory allocation of  array of floats   
 float *ptr = new float[n];

 for(int i=0; i<n; i++){
    cout<<"grade"<<i+1<<endl;
    cin>>*(ptr+i);
 }
cout<<"___________________________________________________"<<endl;
for(int i2=0; i2<n; i2++){
    cout<<"grade"<< *(ptr+i2)<<endl;
   
 }

  delete [] ptr; 

}