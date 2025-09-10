# include <iostream>
using namespace std;
int main()
{

   int arr2[]= {23,24,24};
   cout<<arr2<<endl;// will print the address of first index in array 
 cout<<*arr2<<endl; // will print the value of first index in array 


   int arr[]= {1,2,3,4,5,6,7,8,9,10};
   int *Ap = arr ; // make pointer points at array

    cout<<arr<<endl; // will print the address of first index in array 
   cout<<*arr<<endl; // will print the value of first index in array 
  
   cout<<Ap<<" "<<*Ap<<endl;  // pointer will print the first index value and address 

   cout<<"the first index address: "<<Ap<<endl;
 cout<<"the second index address: "<<Ap+1<<endl;
  cout<<"the third index address: "<<Ap+2<<endl; 


    cout<<"the first index value: "<<*(Ap)<<endl;
 cout<<"the second index value: "<<*(Ap+1)<<endl;
  cout<<"the third index value: "<<*(Ap+2)<<endl; 


  // for loop style 
  int arr3[]={100,200,300,400};
  int *ptr2 = arr3 ; 

  cout<<"\nthe value of arr3 using pointers: ";
  for(int i=0; i<3; i++){
    cout<<*(ptr2+i)<<"  ";
  }

  cout<<"\nthe addresses of arr3 using pointers: ";
  for(int i2=0; i2<3; i2++){
    cout<<ptr2<<" ";
  }
cout<<endl;


}