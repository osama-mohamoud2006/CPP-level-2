#include <iostream>
#include <fstream>
using namespace std ;

void print_file_to_screen(string file_path ){
  fstream file ; 
  file.open(file_path , ios::in) ; // write mode
}
