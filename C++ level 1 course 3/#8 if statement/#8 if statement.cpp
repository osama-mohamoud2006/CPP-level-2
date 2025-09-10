#include <iostream>
using namespace std;
struct strinfo {
	short int mark;
};
void input(strinfo& marks) {
	cout << "enter your mark bitch: " << endl;
	cin >> marks.mark;
	cout << "______________________________________" << endl << endl;
}
void output(strinfo marks) {
	if (marks.mark >= 50) {
		cout << "you are successful !" << endl;
	}
	else {
		cout << " summer is calling you " << endl;
	}
}
int main() {
	strinfo shut_fuck_up_bitch;
	input(shut_fuck_up_bitch);
	output(shut_fuck_up_bitch);
}