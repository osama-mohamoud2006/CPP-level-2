/* 
  int tm_sec; // seconds of minutes from 0 to 61
  int tm_min; // minutes of hour from 0 to 59
  int tm_hour; // hours of day from 0 to 24
  int tm_mday; // day of month from 1 to 31
  int tm_mon; // month of year from 0 to 11
  int tm_year; // year since 1900
  int tm_wday; // days since sunday
  int tm_yday; // days since January 1st
  int tm_isdst; // hours of daylight savings time




  time_t detailed_time = time(0);
    tm* print_detailed_time = localtime(&detailed_time);
    timefile<<"the day in month is: "<<print_detailed_time->tm_mday<<endl;
    timefile<<"the month is: "<<print_detailed_time->tm_mon+1<<endl;
    timefile<<"the year is: "<<print_detailed_time->tm_year+1900<<endl;
    timefile<<"\n\n"<<print_detailed_time->tm_mday<<"/"<<print_detailed_time->tm_mon<<"/"<<print_detailed_time->tm_yday<<endl;

    timefile<<"\n\n"<<"the hour is: "<<print_detailed_time->tm_hour<<endl;
    timefile<<"the min is: "<<print_detailed_time->tm_min<<endl;
    timefile<<"the sec is: "<<print_detailed_time->tm_sec<<endl;

 timefile<<"\n\n"<<print_detailed_time->tm_hour<<":"<<print_detailed_time->tm_min<<":"<<print_detailed_time->tm_sec<<endl;



*/  

#include <iostream>
#include <vector>
#include <ctime>
#include <fstream>
#include <string>
using namespace std;
// things i learned and applied them
//1- vector with sturct
// handel files in c++
//use tm struct to print local time 
struct sttime{
    int day=0 ; 
    int month =0;
    int year =0; 
    int hour =0 ; 
    int min =0 ; 
    int sec =0 ;
};

// fill struct with time data 
sttime hardcoded_struct(){
      time_t detailed_time = time(0); // ˈepək time 
    tm* print_detailed_time = localtime(&detailed_time);
    sttime time ; 
    time.day =print_detailed_time->tm_mday;
    time.month =print_detailed_time->tm_mon+1;
    time.year=print_detailed_time->tm_year+1900;

    time.hour=print_detailed_time->tm_hour;
    time.min =print_detailed_time->tm_min;
   time.sec= print_detailed_time->tm_sec;


   return  time;

}

//push these data to vector 
void fill_vector(vector<sttime> &vdata){
    for(int i=0; i<1; i++){
    vdata.push_back( hardcoded_struct());
    }
}

// access the vector which has the struct data and ios::out to file(write mode) 
void write_to_File(string path,vector<sttime> &vdata ){
    fstream timefile;
    timefile.open(path , ios::out); // writing mode
    if(timefile.is_open()){
          for(sttime i: vdata){
              timefile<<"the day is: "<<i.day<<endl;
             timefile<<"the month is: "<<i.month<<endl;
             timefile<<"the year is: "<<i.year<<endl;
             timefile<<"\n\nthe date is: "<<i.day<<"/"<<i.month<<"/"<<i.year<<endl;

             timefile<<"\n\nthe hour is: "<<i.hour<<endl;
             timefile<<"the min is: "<<i.min<<endl;
             timefile<<"the sec is: "<<i.sec<<endl;
             timefile<<"\n\nthe time is: "<<i.hour<<":"<<i.min<<":"<<i.sec<<endl;
            cout<<"Done! "<<endl;
          }
        
    
 timefile.close();


    }
}

int main(){
    vector<sttime>vdata;
    fill_vector(vdata);
 write_to_File( "time2.text" ,vdata );
}
