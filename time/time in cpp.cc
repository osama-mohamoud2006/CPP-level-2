#include<iostream>
#include <ctime>
using namespace std;
 
int main(){
  // print local time
  time_t timenow = time(0);
  char * humanreadable = ctime(&timenow);
  cout<<humanreadable<<endl;

  // print UTC
  tm *utc = gmtime(&timenow);
  humanreadable= asctime(utc);
  cout<<"\n"<<humanreadable<<endl;
  


}