#include <iostream>
using namespace std;
void function1() {
    cout << "hi bitch iam function 1 " << endl;
}
void function2() {
    function1();
}
void function3() {
    function2();
}
int main() {
    function3();
}