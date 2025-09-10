#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

void write_VectorData_to_file(vector<string> &vdata, string path = "randomdatatoread.text")
{
    fstream write_mode;
    write_mode.open(path, ios::out); // write mode
    if (write_mode.is_open())
    {
        for (string &v : vdata)
        {
            write_mode << v << endl;
        }
        write_mode.close();
    }
}

int main()
{
    vector<string> data{"osama", "mahamoud", "mohammed", "ali"};
    write_VectorData_to_file(data,"outputFromVector.text");

    // vector<string>::iterator vp;
    // for (vp = data.begin(); vp != data.end(); vp++)
    //     cout << *(vp) << endl;
}