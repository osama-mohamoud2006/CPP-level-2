#include <ctime>
#include <iostream>
using namespace std;

int main()
{

    local time
    time_t timeNOW_in_sec_since_1970 = time(0);
    char *timeINString = ctime(&timeNOW_in_sec_since_1970);
    cout << timeINString << endl;
       /UTC time
    tm *gmt_time = gmtime(&timeNOW_in_sec_since_1970);
    char *print_gmt = asctime(gmt_time);
    cout << print_gmt << endl;

    time_t time_epoch= time(0);
    tm * UTC = gmtime(&time_epoch); // convert epoch to struct tm
    char * timeString = asctime(UTC); // converts struct tm into UTC
    cout<<timeString<<endl; // time in UTC  

    char* localTime= ctime(&time_epoch);
    cout<<localTime<<endl; // time in Local  
}