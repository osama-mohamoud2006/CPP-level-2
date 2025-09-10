#include <iostream>
#include <cmath>
using namespace std;

struct marks {
   double mark;
};

double input(marks &grade) {
    cout << "enter mark ";
    cin >> grade.mark;
    return grade.mark;
}

double arr(marks grade[3]) {
    double sum = input(grade[0]) + input(grade[1]) + input(grade[2]);
    double avg = floor (sum / 3);
    return avg;
}

int main() {
    marks grades[3]; 
   double avg = arr(grades);
    
    cout << avg << endl;
    if (avg >= 50) {
        cout << "you are succeed !" << endl;
    }
    else {
        cout << "you are failed ! " << endl;
    }
}