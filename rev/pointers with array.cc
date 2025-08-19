#include <iostream>
using namespace std;

int main()
{

    int arr[] = {10, 20, 40, 60};
    cout << arr << endl;  // the address of the first element in array
    cout << *arr << endl; // the value of the first element in array

    int arr2[] = {90, 80, 70, 60};
    int *ptr = arr2;       // ptr = the address of array
    cout << arr2 << endl;  // the address of 1st element
    cout << ptr << endl;   // the address of 1st element
    cout << *arr2 << endl; // the value of the first element in array
    cout << *ptr << endl;  // the value of the first element in array

    cout << ptr << endl;     // 1 first element (address)
    cout << ptr + 1 << endl; // 2 second element (address)
    cout << ptr + 2 << endl; // 3 third element (address)

    cout << *(ptr) << endl;      // 1 first element
    cout << *(ptr + 1) << endl;  // 2 second element
    cout << *(ptr + 2) << endl;  // 3 third element
    cout << *(arr2 + 2) << endl; // the value of the third element in array

    // 2 for loops

    cout << "\naccessing the elements using array\n";
    for (int i = 0; i < 4; i++)
    {
        cout << *(arr2 + i) << " "; // access elements by derefencing
    }

    cout << "\naccessing the elements using pointer\n";
    for (int i = 0; i < 4; i++)
    {
        cout << *(ptr + i) << " "; // access elements by derefencing
    }

    cout << "\naccessing the addresses using pointer\n";
    for (int i = 0; i < 4; i++)
    {
        cout << (ptr + i) << " "; // access addresses
    }

    cout << "\naccessing the addresses using array\n";
    for (int i = 0; i < 4; i++)
    {
        cout << (arr2 + i) << " "; // access addresses
    }

    cout << endl;
    cout << endl;
    cout << endl;

    char str[] = {'o', 's', 'a', 'm', 'a'};
    char *c = str; // c = the address of array
    cout << *c << endl;// printed 'o' 
    cout << c << endl;// printed the whole array 

    cout << "\naccessing the elements using pointer:\n";
    for (int i = 0; i <= 4; i++)
    {
        cout << *(c + i) ; // access chars
    }

     cout << "\naccessing the elements using array\n";
    for (int i = 0; i <= 4; i++)
    {
        cout << *(str + i) ; // access chars
    }
}
