#include <iostream>
using namespace std;

enum op { add = 1, sub = 2, divide = 3, multiply = 4 };

struct info {
    double x;
    double y;
};            
// var

double select(op& operation, info& var, int& z) {
    cout << "1.add " << endl;
    cout << "2.sub " << endl;
    cout << "3.div " << endl;
    cout << "4.multiply " << endl;
    cin >> z;
    cout << "-------------------------------" << endl;
	return (op)z; // casting z to enum type
    
}

void num(info& var) {
    cout << "enter x " << endl;
    cin >> var.x;

    cout << "enter Y " << endl;
    cin >> var.y;
    cout << "-----------------------------------------------" << endl;
}

void progress(int z, info& var , op operation) {
    switch (z) {
    case op::add:
        cout << "-----------------------------------------------" << endl;
        cout << var.x + var.y << endl;
        break;

    case op::sub:
        cout << "-----------------------------------------------" << endl;
        cout << var.x - var.y << endl;
        break;

    case op::divide:
        cout << "-----------------------------------------------" << endl;
        cout << var.x / var.y << endl;
        break;
    case op::multiply:
        cout << "-----------------------------------------------" << endl;
        cout << var.x * var.y << endl;
        break;

    default:
        cout << "-----------------------------------------------" << endl;
        cout << "Invalid operation!" << endl;
    }
}

int main() {
    op operation;
    info var;
    int z;
    select(operation, var, z);
    num(var);
    progress(z, var , operation);
    return 0;
}