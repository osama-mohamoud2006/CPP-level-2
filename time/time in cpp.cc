#include <iostream>
#include <string>
#include <ctime>
using namespace std;

int main(){
       
      cout<<"_________________________________________\n";

        time_t time_now = time(0); // (type to store time in seconds) get the time Now 
    char* time_readbale = ctime(&time_now); // converts the time in human-readable form (local time)
     cout<<"\nthe time in your area is: "<<time_readbale<<endl; // print the full time d/m/h/m/s/y

     cout<<"_________________________________________\n";
 
     time_t time_gmt = time(0);//(type to store time in seconds) get the time Now in seconds 
 tm *GmtTime = gmtime(&time_gmt); // get the time Now in human-readable form (utc time) d/m/h/m/s/y
 char * GMT_readable = asctime(GmtTime) ; // converts the time in human-readable form (utc format)
 cout<<"\nutc format: "<<GMT_readable<<endl;

}