#include <iostream>
#include <iomanip>
#include <stdio.h>
using namespace std;
int main()
{

    int arr[10][10];
    int multi = 0;
    for (int i = 0; i < 10; i++) // for rows
    {
        for (int c = 0; c < 10; c++)
        {
            multi = (i + 1) * (c + 1);
            cout << setw(4) << i + 1 << "*" << c + 1 << "=" << multi << setw(1);
            multi = 0;
        }
        cout << endl;
    }
}