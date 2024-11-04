#include <iostream>


int main() {
    int num_1 = 15;
    int num_2 = 017;
    int num_3 = 0xF;
    int num_4 = 0b1111;

    std::cout << "Decimal: " << num_1 << std::endl;
    std::cout << "Octal: " << num_2 << std::endl;
    std::cout << "HexaDecimal: " << num_3 << std::endl;
    std::cout << "Binary: " << num_4 << std::endl;
    return 0;
}