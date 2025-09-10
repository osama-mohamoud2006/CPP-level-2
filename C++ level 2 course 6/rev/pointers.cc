#include <iostream>
using namespace std;
void swap(int *a , int *b){
    int temp = *a ;
    *a=*b;
    *b=temp;
}
int main()
{

    int m = 10;
    int &h = m; // h is considered the nick name of m
    // both of them have the same address , value
    cout << m << endl;
    cout << h << endl;
    h = 300;
    cout << m << endl;

    int x = 20;
    int *ptr = &x;
    // pointer
    // 1- should have the same data type of the value which pointer is pointing at
    // 2- pointer stores only the address of the var
    // 3- pointer has its address

    cout << ptr << endl; // will print address

    int v = 12;
    ptr = &v;             // ptr can points at another variable in runtime
    cout << &v << endl;   // will print the address of v
    cout << ptr << endl;  // will print the address of v
    cout << &ptr << endl; // pointer has its address

    // Dereferencing
    cout << *ptr << endl; // will print the value of v as the pointer points at it
    *ptr = 3000;//you can change the value by Dereferencing
    cout << v << endl;
    cout << *ptr << endl;
    v=900;
        cout << *ptr << endl;

        ///swaping using pointers 
        int a =10 ;
        int b =20; 
        cout<<"\nbefore swaping\n";
        cout<<a<<endl;
        cout<<b<<endl;
        swap(&a,&b);
         cout<<"\nAfter swaping\n";
        cout<<a<<endl;
        cout<<b<<endl;

}