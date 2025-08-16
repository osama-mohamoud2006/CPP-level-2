 #include <ctime>
 #include <iostream>
 using namespace std;
 string isdayligth(int i){
    string arr[]={"Daylight time","Winter time"};
    return arr[i-1];
 }

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
*/  
 int main(){
    
    time_t epoch_time = time(0); // the time since 1/1/1970 
    tm * detailed_time = localtime(&epoch_time);

    cout<<"the day in week order is: " <<detailed_time->tm_wday+1<<endl; // it starts from sun=0   
    cout<<"the day in month is: "<<detailed_time->tm_mday<<endl; 
    cout<<"the month is: "<<detailed_time->tm_mon+1<<endl;// it starts from jan=0 
    cout<<"the year is: "<<detailed_time->tm_year+1900<<endl; // you should add 1900 
    cout<<"how many days passed since 1/1/2025: "<<detailed_time->tm_yday<<endl;
    cout<<"you are in daylight time: "<< isdayligth(detailed_time->tm_isdst)<<endl;
    cout<<"\n"<<detailed_time->tm_mday<<"/"<<detailed_time->tm_mon+1<<"/"<<detailed_time->tm_year+1900<<endl;
    cout<<"\n\nthe hour is: "<<detailed_time->tm_hour<<endl;
    cout<<"the min is: "<<detailed_time->tm_min<<endl;
    cout<<"the seconds is: "<<detailed_time->tm_sec<<endl;

    cout<<"\n\n"<< detailed_time->tm_hour<<":"<<detailed_time->tm_min<<":"<<detailed_time->tm_sec<<endl;



 }