#include <iostream>
#include <vector>
#include"E:\projects\my library\AllStuff.h"  
using namespace std; 
using namespace AllStuff;

struct ststudents{
    string name = " ";
    short age = 0 ; 
    int num =0 ; 
};

ststudents fill_struct(){
    ststudents fill ; 
    fill.name = read_full_line("enter full name: ");
    fill.age = enter_postive_number("enter age: ");
    return fill; 
}

void print_data(ststudents data_output){
    cout<<"Full name is: "<<data_output.name<<endl;
    cout<<"Age is: "<<data_output.age<<endl;

}

void start(){
    ststudents data ; 
vector <ststudents> data ;

do{
  
    cout<<"\nenter how many students you want to fill: ";
    cin>>data.num;


}while(" ");


}
