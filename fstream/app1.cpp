#include <iostream>
#include <fstream>
#include <iomanip>
#include<vector>
#include"E:\projects\my library\AllStuff.h"  
using namespace std ;
using namespace AllStuff;

struct stdata{
    string name = " ";
    short age =0 ;
};

stdata fill_data(){
    stdata data ;
   
    data.name = read_full_line("\nenter full name: ");
   
      if (cin.peek() == '\n') {
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
   
    data.age = enter_postive_number("\nenter correct age: ");
    return data ; 
}

void fill_vector(vector<stdata> & vdata,int &number){
     number = 0 ; 
    char c = 'Y';
    do{
       
        number = enter_postive_number("\nenter how many students you want: ");
        for(int i=0; i<number; i++){
            cout<<"\nfor student"<<i+1<<endl;
            vdata.push_back(fill_data());
        }
cout<<"\ndo you want another? \n";
cin>>c; 
    }while(c=='y'||c=='Y');
}


void output_to_text_file(vector<stdata> & vdata, int number){
   

   fstream file ;
   file.open("output_text.text" , ios::out | ios::app );
   if(file.is_open()){
    cout<<"\nsucess!\n";
    file<<"\n__________________________________________\n";
           for(int i=0; i<number; i++){
        file<<"\nstudent"<<i+1<<endl;
        file<<"the name is: "<<vdata[i].name<<endl;
        file<<"the age is: "<<vdata[i].age<<endl;
        file<<"\n__________________________________________\n";
     }
       file.close(); 
   }
}


int main(){
  vector<stdata>  vdata;
  int number=0;
  fill_vector( vdata, number);
    output_to_text_file( vdata,number);

}
 


