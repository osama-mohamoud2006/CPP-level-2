#include <iostream>
#include <vector>
#include <fstream>
#include <string>
using namespace std;

// push file content to vector (read mode)
vector<string> push_file_to_vector(string path)
{
    vector<string> res;
    fstream read_mode;

    read_mode.open(path, ios::in); // read mode
    if (read_mode.is_open())
    {
        string to_push = " ";
        while (getline(read_mode, to_push))
        {
            res.push_back(to_push);
        }
        read_mode.close();
    }
    return res;
}

// output vector data in file (write mode)
void Vector_data_to_file(string path, vector<string> &vdata)
{

    fstream write;
    write.open(path, ios::out); // write mode
    if (write.is_open())
    {
        vector<string>::iterator vp;
        for (vp = vdata.begin(); vp != vdata.end(); vp++)
        {
            if (*vp != "")
                write << *(vp) << endl;
        }
        write.close();
    }
}

void delete_record(string path, string to_clear)
{
    vector<string> data_from_file;
    data_from_file = push_file_to_vector(path); // pushed file to vector

    for (string &str : data_from_file) // delete record
    {
        if (str == to_clear)
            str = "";
    }

    Vector_data_to_file(path, data_from_file); // write the edited vector in file again
}

void print_file_content(string path)
{
    fstream read;
    read.open(path, ios::in); // read
    if (read.is_open())
    {
        string print = " ";
        while (getline(read, print))
        {                          // read line-by line
            cout << print << endl; // output to screen
            // read << print << endl; // output to screen
        }
        read.close();
    }
}

int main()
{

    delete_record("delete.text", "osama");
    print_file_content("delete.text");
}