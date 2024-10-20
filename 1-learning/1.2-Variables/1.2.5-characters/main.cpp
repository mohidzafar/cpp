#include <iostream>

using namespace std;

int main() {
    char char_1 {'A'};
    char char_2 {'B'};
    char char_3 {'C'};
    char char_4 {'D'};
    char char_5 {'E'};

    cout << "Character Value: " << char_1 << endl;
    cout << "Integer Value: " << static_cast<int>(char_1) << endl;
    cout << "Character Value: " << char_2 << endl;
    cout << "Integer Value: " << static_cast<int>(char_2) << endl;
    cout << "Character Value: " << char_3 << endl;
    cout << "Integer Value: " << static_cast<int>(char_3) << endl;
    cout << "Character Value: " << char_4 << endl;
    cout << "Integer Value: " << static_cast<int>(char_4) << endl;
    cout << "Character Value: " << char_5 << endl;
    cout << "Integer Value: " << static_cast<int>(char_5) << endl;

    cout << "<---------------------->" << endl;

    char int_value_1 = 53;
    char int_value_2 = 54;
    char int_value_3 = 55;
    char int_value_4 = 56;
    char int_value_5 = 57;

    cout << "Character Value: " << int_value_1 << endl;
    cout << "Integer Value: " << static_cast<int>(int_value_1) << endl;
    cout << "Character Value: " << int_value_2 << endl;
    cout << "Integer Value: " << static_cast<int>(int_value_2) << endl;
    cout << "Character Value: " << int_value_3 << endl;
    cout << "Integer Value: " << static_cast<int>(int_value_3) << endl;
    cout << "Character Value: " << int_value_4 << endl;
    cout << "Integer Value: " << static_cast<int>(int_value_4) << endl;
    cout << "Character Value: " << int_value_5 << endl;
    cout << "Integer Value: " << static_cast<int>(int_value_5) << endl;

    cout << "<---------------------->" << endl;
    
    cout << "Size of char: " << sizeof(char) << endl;

    return 0;
}