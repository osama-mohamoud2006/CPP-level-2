#include <iostream>
#include <vector>
#include <fstream>
#include <string>
using namespace std;

// push file data to vector (read mode)

vector<string> push_fileData_to_vector(string path)
{
    vector<string> res;
    fstream read;
    read.open(path, ios::in);
    if (read.is_open())
    {
        string line = " ";
        while (getline(read, line))
        {
            res.push_back(line);
        }
        read.close();
    }

    return res;
}

// move vector elements to vector (write mode)

void move_vector_elements_to_vector(string path, vector<string> &vdata)
{
    fstream write;
    write.open(path, ios::out); // write mode
    if (write.is_open())
    {
        vector<string>::iterator iv;
        for (iv = vdata.begin(); iv != vdata.end(); iv++)
        {
            write << *(iv) << endl;
        }
        write.close();
    }
}

void update_record(string path, string what_do_you_want_to_updata, string NewWord)
{
    vector<string> vdata;
    vdata = push_fileData_to_vector(path); // transfer file data to vector

    for (string &str : vdata)
    { // update record btw
        if (str.find(what_do_you_want_to_updata) != string::npos)
            str = NewWord;
    }

    move_vector_elements_to_vector(path, vdata); // move vector content to file
}

//print file content on screen 

void print_file_content(string path)
{
    //read mode
    fstream print;
    print.open(path , ios::in); // read mode
    if(print.is_open()){
        string line = " ";
        while(getline(print , line)){
            cout<<line<<endl;
        }
    }
}
int main()
{
    update_record("delete.text", "amged", "osama");
     print_file_content("delete.text");
}
