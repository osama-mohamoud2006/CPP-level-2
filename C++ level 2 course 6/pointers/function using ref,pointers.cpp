#include <iostream>
using namespace std;

void swap(int &n1, int &n2) {
    int temp = 0;
    temp = n1; // store the value of n1
    n1 = n2;
    n2 = temp;
}

void swap_Upointers(int *n1, int *n2) {
    // int* n1 --> is a pointer
    // *n1 --> accesses and modifies the value pointed to by n1
    int temp = 0;
    temp = *n1; // store the value pointed to by n1
    *n1 = *n2;
    *n2 = temp;
}

int main() {
    int n1 = 10;
    int n2 = 15;
    cout << "Before using swap:\n" << n1 << "\n" << n2 << endl;

    // If you don't use '&' in the function parameters,
    // any changes will be local to the function and won't affect the original values in main,
    // because the function only receives a copy of the values.
    // swap(n1, n2); // nothing will change

    cout << "Using swap without '&':\n" << n1 << "\n" << n2 << endl;

    swap(n1, n2);
    cout << "Using swap with '&':\n" << n1 << "\n" << n2 << endl;

    // Using pointers
    // Reminder:
    // int* p = &x; --> a pointer stores only the address of a variable
    // *p = 20; --> modifies the value at the address the pointer is pointing to
    // Since pointers store addresses, we send the variable's address, not the direct value.

    int a = 90;
    int b = 100;
    /*
        a      b
       90     100
    */

    swap_Upointers(&a, &b);
    /*
        a      b
       100     90
    */
    cout << "Using swap with pointers:\n" << a << "\n" << b << endl;
}
