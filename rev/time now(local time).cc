#include <ctime>
#include <iostream>
using namespace std;

int main()
{

   

    time_t time_epoch= time(0);
    tm * UTC = gmtime(&time_epoch); // convert epoch to struct tm
    char * timeString = asctime(UTC); // converts struct tm into UTC
    cout<<timeString<<endl; // time in UTC  

    char* localTime= ctime(&time_epoch);
    cout<<localTime<<endl; // time in Local  
}