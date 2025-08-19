#include <iostream>
using namespace std;

int main()
{
    int *ptr;
    ptr = new int; // acllocate memory
    *ptr = 19;
    cout << ptr << endl;
    cout << *ptr << endl;
    delete ptr; // deallocate

    float *ptr2;
    ptr2 = new float;
    *ptr2 = 19.32;
    cout << *ptr2 << endl;
    delete ptr2;

    void *ptr3;
      ptr3 = new float;  // acllocate memory
    *(static_cast<float *>(ptr3)) = 17.34; // converted void pointer to float

    cout << *(static_cast<float *>(ptr3))<< endl;

    int * = ;
    *ptr4=  19;
    cout<<*ptr4<<endl; 
}