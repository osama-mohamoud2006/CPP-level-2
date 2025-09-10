#include <fstream>
#include <iostream>
using namespace std;
int main()
{
    fstream write_mode;
    write_mode.open("writeMode.text", ios::out); // write mode
    if (write_mode.is_open())
    {
        for (int i = 0; i < 9; i++)
        {
            write_mode << "hello it is write mode !"<<endl;
        }
        write_mode.close();
    }
}