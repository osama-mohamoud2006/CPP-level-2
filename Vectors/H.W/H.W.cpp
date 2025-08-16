#include <iostream>
#include <vector>
#include <limits>
#include <iomanip>
using namespace std;

int input_number() {
    printf("enter number: ");
    int n = 0;

    cin >> n;
    while (cin.fail()) {
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        system("color 4f");
        cout << "\a";

        printf("\n enter again: ");
        cin >> n;
    }
    system("color 0f");
    return n;
}
// vector <int> vec

void print(vector<int>&add) {
    printf("\n\nthe vector's output: ");
    for (int o : add) {
        cout << o << " ";
    }
    cout << endl;
}

void start(); 


int main() {
    start();
}

void start() {
    vector<int>add;
    int n = 0;
    char c = 'y';
    do {
        cout << setw(5) << "enter the number of elements you want to add: ";
        cin >> n;
        for (int i = 0; i < n; i++) {
            add.push_back(input_number());
        }


        cout << endl << endl;
        cout << "do you want to add another ?" << setw(3) << " \n \"Y\" for yes \"N\" to exit \n";
        printf("\n your choice: ");
        cin >> c;
        if (c == 'y' || c == 'Y') {
            system("cls");
        }

    } while (c == 'y' || c == 'Y');

    print(add);
}