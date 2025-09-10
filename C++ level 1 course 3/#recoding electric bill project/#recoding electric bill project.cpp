#include <iostream>
#include <string>
struct stdata {
    int hours;
    double price;
    double electric_cons;
    double bill;
    double eprice;
    int clock;
    double a;
    int chines;
};
using namespace std;
void print() {
    cout << "----------------------------------------------------------------------------------------------------------------------- " << endl;
    cout << "                                  * welcome to R.P ELECTRIC BILL GENERATOR *          \n  " << endl;
    cout << "THIS IS TABLE FOR ALL MACHINES NUMBER PLEASE CHOOSE ONE OF THEM " << endl;
    cout << "--------------------------------------------------------------------------------------" << endl;
    cout << "| 230 | 280 | 281 | 282 | 283 | 200 | 102 | 103 | 250 | 150 | 203 | 310 | 210 | 104 |" << endl;
    cout << "--------------------------------------------------------------------------------------" << endl;
}
double electic_consumption(stdata& data) {
    data.electric_cons = ((data.a * 1.7 * 380 * 0.75 * 0.75) / 1000) * data.hours;
    cout << "your electric consumption for this machine is : " << data.electric_cons << "kw" << endl;
    return data.electric_cons;
}
double electric_bill(stdata& data) {
    data.bill = data.electric_cons * data.price;
    cout << "your electric bill for this machine is : " << data.bill << "L.E" << endl;
    return data.bill;
}
void input(stdata& data) {
    cout << "enter working hours for the machine : ";
    cin >> data.hours;

    cout << "enter electric price kw/h : ";
    cin >> data.price;

    cout << "|--------------------------------------------------------| " << endl;
    electic_consumption(data);
    cout << "|--------------------------------------------------------|" << endl;

    electric_bill(data);
    cout << "|--------------------------------------------------------|" << endl;
}
void machines(stdata& data) {
    bool machine = true;
    switch (data.chines) {
    case 230: data.a = 35; break;
    case 280: data.a = 30.6; break;
    case 281: data.a = 28; break;
    case 282: data.a = 23.3; break;
    case 283: data.a = 100; break;
    case 200: data.a = 54.6; break;
    case 102: data.a = 34; break;
    case 103: data.a = 29.6; break;
    case 250: data.a = 30; break;
    case 150: data.a = 48; break;
    case 203: data.a = 60; break;
    case 310: data.a = 49.3; break;
    case 210: data.a = 33.6; break;
    case 104: data.a = 29.6; break;
    default:
        machine = false;
        cout << "error machine isn't exist out of range \a " << endl;
        return;
    }
    input(data);
}
void whole_factory(stdata& data) {
    cout << " enter the electric price  : ";
    cin >> data.eprice;
    cout << "enter the working hours for the whole factory : ";
    cin >> data.clock;
}
void cons_factory(stdata& data) {
    double toooootal = (12.7 + 11.1 + 10.2 + 8.5 + 36.3 + 19.8 + 12.4 + 10.8 + 10.9 + 17.4 + 21.8 + 17.9 + 12.2 + 10.8) * data.clock;
    double tprice = (toooootal * data.eprice);
    cout << "the total consumption : " << toooootal << "kw\n" << endl;
    cout << "your total price : " << tprice << "L.E" << endl;
}
int main() {
    stdata data;
    print();
    int choice;
    do {
        cout << "1. compute for one machine only \n";
        cout << "2. compute for the whole factory\n";
        cout << "3. Exit\n";
        cout << "Choose an option (1-3): ";
        cin >> choice;
        while (choice < 1 || choice > 3) {
            cout << "Your Choice " << choice << " Is Not correct \n";
            cout << "Please Choose an option (1-3): ";
            cin >> choice;
        }
        cout << endl;
        if (choice == 1) {
            cout << "please enter machine number : ";
            cin >> data.chines;
            machines(data);
        }
        else if (choice == 2) {
            cout << "-------------------------------------------------------------\n " << endl;
            whole_factory(data);
            cons_factory(data);
        }
        cout << "------------------------------------------------------------------------------------------\n " << endl;
    } while (choice != 3);
    return 0;
}
