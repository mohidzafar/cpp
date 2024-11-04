#include <iostream>

using namespace std;

int main() {

    unsigned char data {250};

    ++data;
    cout << "Data: " << static_cast<int>(data) << endl;

    ++data;
    cout << "Data: " << static_cast<int>(data) << endl;

    ++data;
    cout << "Data: " << static_cast<int>(data) << endl;

    ++data;
    cout << "Data: " << static_cast<int>(data) << endl;

    ++data;
    cout << "Data: " << hex << static_cast<int>(data) << endl;

    ++data; // Overflow (256)
    cout << "Data: " << static_cast<int>(data) << endl;

    cout << dec; // Changing hex to dec

    data = 1;

    --data;
    cout << "Data: " << static_cast<int>(data) << endl;

    --data; // Underflow
    cout << "Data: " << static_cast<int>(data) << endl;


    return 0;
}