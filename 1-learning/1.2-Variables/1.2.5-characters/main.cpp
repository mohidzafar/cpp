#include <iostream>


int main() {
    char char_1 {'A'};
    char char_2 {'B'};
    char char_3 {'C'};
    char char_4 {'D'};
    char char_5 {'E'};

    std::cout << "Character Value: " << char_1 << std::endl;
    std::cout << "Integer Value: " << static_cast<int>(char_1) << std::endl;
    std::cout << "Character Value: " << char_2 << std::endl;
    std::cout << "Integer Value: " << static_cast<int>(char_2) << std::endl;
    std::cout << "Character Value: " << char_3 << std::endl;
    std::cout << "Integer Value: " << static_cast<int>(char_3) << std::endl;
    std::cout << "Character Value: " << char_4 << std::endl;
    std::cout << "Integer Value: " << static_cast<int>(char_4) << std::endl;
    std::cout << "Character Value: " << char_5 << std::endl;
    std::cout << "Integer Value: " << static_cast<int>(char_5) << std::endl;

    std::cout << "<---------------------->" << std::endl;

    char int_value_1 = 53;
    char int_value_2 = 54;
    char int_value_3 = 55;
    char int_value_4 = 56;
    char int_value_5 = 57;

    std::cout << "Character Value: " << int_value_1 << std::endl;
    std::cout << "Integer Value: " << static_cast<int>(int_value_1) << std::endl;
    std::cout << "Character Value: " << int_value_2 << std::endl;
    std::cout << "Integer Value: " << static_cast<int>(int_value_2) << std::endl;
    std::cout << "Character Value: " << int_value_3 << std::endl;
    std::cout << "Integer Value: " << static_cast<int>(int_value_3) << std::endl;
    std::cout << "Character Value: " << int_value_4 << std::endl;
    std::cout << "Integer Value: " << static_cast<int>(int_value_4) << std::endl;
    std::cout << "Character Value: " << int_value_5 << std::endl;
    std::cout << "Integer Value: " << static_cast<int>(int_value_5) << std::endl;

    std::cout << "<---------------------->" << std::endl;
    
    std::cout << "Size of char: " << sizeof(char) << std::endl;

    return 0;
}