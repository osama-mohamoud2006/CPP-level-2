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


void start(ststudents &data ,vector <ststudents> &vdata  ){
  


char choice = 'y';
do{
  
    cout<<"\nenter how many students you want to fill: ";
    cin>>data.num;

    for(int i=0; i<data.num; i++){
      vdata.push_back(fill_struct());
      cout<<"\n_______________\n";

    }

    cout<<"\n\ndo you want to fill more? ";
    cin>>choice ; 


}while(choice == 'Y' || choice == 'y');


}

void final_print(ststudents data ,vector <ststudents> &vdata ){
   //  cout<<"Full name is: "<<data_output.name<<endl;
    //cout<<"Age is: "<<data_output.age<<endl;
  start(data,  vdata  );
  cout<<"\n the total students is :"<<data.num<<endl;
  for(ststudents o : vdata)
  {
    
    cout<<"Full name is: " <<o.name<<endl;
    cout<<"age is: " <<o.age<<endl;
  }

}

int main(){
    ststudents data ;
    vector <ststudents> vdata ;
    final_print(data , vdata);

}
