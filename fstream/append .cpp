#include <iostream>
#include <fstream> 
using namespace std;

int main(){
    fstream file ; // | is or bitwise 
    
    // write mode 
    file.open("output_text.text", ios::out |ios::app); // ios::app to add the new data without overwriting the old data 
    if(file.is_open())
    {
        file<<"\n_____________________________\n";
        file<<"\n"<<"append successfully! "<<endl; 
        file<<"\n_____________________________\n";

        file.close();
    }


}