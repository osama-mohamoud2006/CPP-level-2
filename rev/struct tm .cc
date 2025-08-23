#include <ctime>
#include <iostream>
using namespace std;

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
int main()
{

    time_t EpochTime = time(0); // time int seconds since 1/1/1970
    char *local = ctime(&EpochTime);
    cout << "\nlocal Time: " << local << endl; // local time
    /////////
    tm *StructTm = localtime(&EpochTime); // (بوينتر من نوع ستراكت))time struct
   // tm *GMT = gmtime(&EpochTime);
    //char *GMTString = asctime(GMT);
   // cout << "UTC time: " << GMTString << endl; // UTC time

    cout << "Seconds is: " << StructTm->tm_sec << endl;
    cout<<"Hour is: "<<StructTm->tm_hour<<endl;
    cout<<"Min is: "<<StructTm->tm_min<<endl;

    cout<<StructTm->tm_hour<<"/"<<StructTm->tm_min<<"/"<<StructTm->tm_sec<<endl;

    cout<<"The day of week is: "<<StructTm->tm_wday<<endl;
    cout<<"The day of month: "<<StructTm->tm_mday<<endl;
    cout<<"The day of year: "<<StructTm->tm_yday<<endl;
    

    cout<<"The year is: "<<StructTm->tm_year+1900<<endl;
    cout<<"The month is: "<<StructTm->tm_mon+1<<endl;
    cout<<"The day is: "<<StructTm->tm_yday<<endl;

    cout<<"is day light? "<<StructTm->tm_isdst<<endl;

/
}