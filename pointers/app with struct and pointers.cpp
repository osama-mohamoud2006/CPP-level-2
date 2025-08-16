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
     ststudents *stptr  = & fill ;// make pointer for struct 
    stptr->name = read_full_line("enter full name: ");
    stptr->age = enter_postive_number("enter age: ");
    return fill; 
}


void start(ststudents &data ,vector <ststudents> &vdata  ){
  ststudents *stptr  = & data ;// make pointer for var data  
vector <ststudents> *vptr = &vdata; // make pointer for vector 

char choice = 'y';
do{
  
    cout<<"\nenter how many students you want to fill: ";
    cin>>stptr->num;

    for(int i=0; i<data.num; i++){
      vptr->push_back(fill_struct());
      cout<<"\n_______________\n";

    }

    cout<<"\n\ndo you want to fill more? ";
    cin>>choice ; 


}while(choice == 'Y' || choice == 'y');


}

void final_print(ststudents data ,vector <ststudents> &vdata ){
   
  start(data,  vdata  );

//  vector <ststudents> *ptr ; 
//     ptr= &vdata;

cout<<"\n the total students is :"<<data.num<<endl;
cout<<"____________________________________________________"<<endl;
for(int o =0; o<vdata.size(); o++)
{
  ststudents *ptr= &vdata[o]; // access struct in  vector
  cout<<"\nFull name is: " <<ptr->name<<endl;
  cout<<"\nage is: " <<ptr->age<<endl;
}



}

int main(){

      ststudents data ;
       ststudents *pd=&data ;
    vector <ststudents> vdata ;

  vector <ststudents> *ptr ; // make pointer points at  vector
    ptr= &vdata;
     
    final_print(*pd , *ptr);

}
