#include <iostream>
#include <vector>
using namespace std;

void vector_fill(vector<int>& numbers, int& n) {
    int x;
    cout << "Enter number of elements: ";
    cin >> n;
    if (n <= 0) return; 
    for (int i = 0; i < n; ++i) {
        cout << "Enter element #" << i + 1 << ": ";
        cin >> x;
        numbers.push_back(x);
    }
}

void find_even_order(const vector<int>& numbers, int index) {
    if (index < 0) return;

    if (index % 2 == 0)
        cout << numbers[index] << " ";

    find_even_order(numbers, index - 1);
}

int main() {
    int n = 0;
    vector<int> numbers;

    vector_fill(numbers, n);

    cout << "Output: ";
    find_even_order(numbers, n - 1);
    cout << endl;
}
