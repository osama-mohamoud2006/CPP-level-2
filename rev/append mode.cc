#include<fstream>
#include<iostream>
using namespace std;

int main(){
    fstream append_mode ; // ios::out for writing , ios::app for append data
    append_mode.open("append.text",ios::out | ios::app); // pervious data wonot be cleared 
    if(append_mode.is_open()){
        append_mode<<"hello from apppend mode! ";
        append_mode.close();
    }
}