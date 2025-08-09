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
    cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
    data.age = enter_postive_number("\nenter correct age: ");
    return data ; 
}

void fill_vector(vector<stdata> & vdata,int &number){
     number = 0 ; 
    char c = 'Y';
    do{
       
        number = enter_postive_number("\nenter how many students you want: ");
        for(int i=0; i<number; i++){
            vdata.push_back(fill_data());
        }
cout<<"\ndo you want another? \n";
cin>>c; 
    }while(c=='y'||c=='Y');
}

void vector_output(vector<stdata> & vdata , int number){
     for(int i=0; i<number; i++){
         cout<<"\n__________________________________________\n";
        cout<<"\nstudent"<<i<<endl;
        cout<<"the name is: "<<vdata[i].name<<endl;
        cout<<"the age is: "<<vdata[i].age<<endl;
        cout<<"\n__________________________________________\n";
     }

}

void output_to_text_file();

void start(){
    
}

int main(){
  vector<stdata>  vdata;

}
 
void output_to_text_file(vector<stdata> & vdata, int number){
   

   fstream file ;
   file.open("output_text.text" , ios::out | ios::app );
   if(file.is_open()){
       vector_output( vdata ,number );
       file.close(); 
   }
}