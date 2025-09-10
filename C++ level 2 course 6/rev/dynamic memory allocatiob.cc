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
    ptr3 = new float;                      // acllocate memory
    *(static_cast<float *>(ptr3)) = 17.34; // converted void pointer to float

    cout << *(static_cast<float *>(ptr3)) << endl;

  

    int l;
    cout << "\nenter length: \n";
    cin >> l;
// i didnot intialize the size of array , i can decide the length of array during runtime

    float *ptr5 = new float[l]; // dynamic array (stored in heap)

    for (int i = 0; i < l; i++)
    {
        // ptr5[i];
        cout << "enter: ";
       // cin >> *(ptr5 + i); // -> another way 
       cin>>ptr5[i];
        cout << endl;
    }

    for (int i = 0; i < l; i++)
    {
        // cout<<ptr5[i]<<" ";  // -> another way 

        cout << *(ptr5 + i) << " ";
    }

    delete []ptr5;// deallocate
}
