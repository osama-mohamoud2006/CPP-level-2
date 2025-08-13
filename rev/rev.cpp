#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int b = 0;
    int c = a / 10; // ?? Runtime error: Division by zero
    cout << c;
    return 0;
}
