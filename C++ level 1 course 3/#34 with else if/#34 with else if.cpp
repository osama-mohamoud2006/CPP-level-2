#include <iostream>
using namespace std;
struct sales {
	double total_sales;
};
void input(sales& input_sales) {
	cout << "enter total sales: " << endl;
	cin >> input_sales.total_sales;
}

void output(sales& output_sales) {
	if (output_sales.total_sales == 1000000) {
		float comm = 1.0 * output_sales.total_sales;
		cout << "total commission " << comm << endl;
	}
	else if (output_sales.total_sales >= 500000 && output_sales.total_sales <= 1000000) {
		float comm = 2.0 * output_sales.total_sales;
		cout << "total commission " << comm << endl;
	}
	else if (output_sales.total_sales >= 100000 && output_sales.total_sales <= 500000) {
		float comm = 3.0 * output_sales.total_sales;
		cout << "total commission " << comm << endl;
	}
	else if (output_sales.total_sales >= 50000 && output_sales.total_sales <= 100000) {
		float comm = 5.0 * output_sales.total_sales;
		cout << "total commission " << comm << endl;
	}
	else {
		float comm = 0 * output_sales.total_sales;
		cout << "total commission " << comm << endl;
		cout << "percentage is zero " << endl;
	}
}

int main() {
	sales sale;
	input(sale);
	output(sale);
}