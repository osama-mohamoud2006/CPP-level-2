#include <iostream>
#include"E:\projects\my library\AllStuff.h"  
#include <string>
using namespace std;
using namespace AllStuff;
struct ststudent{
    string name= " ";
    string class_name = " ";

};

ststudent fill_data(){
    ststudent data;
    cin.ignore();
    cout<<"\nenter name: ";
    string name ;
    cin>>name; 
   data.name= name;
   cout<<"\nenter class: ";
   string cn ;
   cin>>cn ; 
   data.class_name = cn;
    return data ; 
}



void input_array(ststudent *&ptr ){
    cout<<"enter number of students you want: ";
    int l ;
    cin >> l; 

    // allcoate memory for dynamic array (stored in heap )
    ptr = new ststudent [l]; 
    for(int i=0; i<l; i++){
        *(ptr+i) = fill_data();
    }
   
     for(int o=0; o<l; o++){
           cout<<"\nthe name is: "<<(ptr+o)->name<<endl;
      cout<<"his/her class is: "<<(ptr+o)->class_name<<endl;
     }

   delete [] ptr ; // deallocate 
 
}



int main(){
    
    ststudent stu ;
    ststudent *ptr = &stu ;
     input_array( ptr );
     
     

}