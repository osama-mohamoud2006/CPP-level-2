#include <iostream>
#include <fstream>
#include <string> 
using namespace std ;

void print_file_to_screen(string file_path ){
    // note file path string like "output_text.text"(as ex) the file path should be string so it is noraml what idid 
  fstream file ; 
  file.open(file_path , ios::in) ; // write mode


  if(file.is_open()){

    string current_line = " ";
    while(getline(file , current_line)){
        cout<<current_line<<endl;
    }
  }

}


int main(){
    print_file_to_screen( "output_text.text" );
}