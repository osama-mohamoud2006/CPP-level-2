#include <iostream>

int main() {
    // Declaring a register variable
    register int count = 0; 

    // Using the register variable
    for (int i = 0; i < 10; ++i) {
        count++;
    }
    
    std::cout << "Count: " << count << std::endl;

    return 0;
}