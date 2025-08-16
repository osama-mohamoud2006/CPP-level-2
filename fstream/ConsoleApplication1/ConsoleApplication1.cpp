#include <iostream>
#include <fstream>
#include <string> 
using namespace std;

void print_file_to_screen(string file_pathfrom , string file_path_to="") {

    // note file path string like "output_text.text"(as ex) the file path should be string so it is noraml what i did 
    fstream file;
    fstream file2;

    file.open(file_pathfrom, ios::in); // write mode (in --> means the data in file ) 

    file2.open(file_path_to, ios::out | ios::app); // read mode for file 2

    if (file.is_open()&& file2.is_open())  {

        string current_line = " ";

        while (getline(file, current_line)) {
           // make the output in the second file 
                file2<< current_line << endl;
           
        }
    }

}


int main() {
    print_file_to_screen("output_text2.text","output_text.text");
}