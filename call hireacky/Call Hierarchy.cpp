#include <iostream>

using namespace std;
void f4()
{
    cout << "hello world" << endl;
    cout << "bye world" << endl;
}
void f3()
{
    cout << "hi f3" << endl;
    f4();
    cout << "bye f3" << endl;
}
void f2()
{
    cout << "hi f2" << endl;
    f3();
    cout << "bye f2" << endl;

}
void f1()
{
    cout << "hi f1" << endl;
    f2();
    cout << "bye f1" << endl;

}
int main() {
    f1();
    return 0;
}