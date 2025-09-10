#include<iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10; j++) {
            cout << i << " num" << endl;
            cout << i << '*' << j << '='  << i * j << endl;
        }
        cout << "________________" << endl;
        cout << "\n";
    }
    return 0;
}