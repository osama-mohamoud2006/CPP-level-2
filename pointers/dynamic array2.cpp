#include <iostream>
#include <string>
using namespace std;
struct ststudent{
    string name= " ";
    string class_name = " ";

};

ststudent fill_data(){
    ststudent data;
   
    cout<<"\nenter full name: ";
    getline(cin,data.name);
    cout<<"\nenter the class name: ";
    getline(cin,data.class_name);
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
           cout<<"the name is: "<<(ptr+o)->name<<endl;
      cout<<"his/her class is: "<<(ptr+o)->class_name<<endl;
     }
   
 
}



int main(){
    ststudent stu ;
    ststudent *ptr = &stu ;
     input_array( ptr );
     
     

}