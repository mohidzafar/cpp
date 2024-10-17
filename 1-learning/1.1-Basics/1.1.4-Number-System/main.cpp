#include <iostream>

using namespace std;

int main() {
    int num_1 = 15;
    int num_2 = 017;
    int num_3 = 0xF;
    int num_4 = 0b1111;

    cout << "Decimal: " << num_1 << endl;
    cout << "Octal: " << num_2 << endl;
    cout << "HexaDecimal: " << num_3 << endl;
    cout << "Binary: " << num_4 << endl;
    return 0;
}