#include <iostream>


int main() {
    auto var1 {16}; // Integer
    auto var2 {4.32}; // Double
    auto var3 {'f'}; // Character
    auto var4 {false}; // Boolean

    //Integer Modifiers
    auto var5 {16u}; // unsigned
    auto var6 {16ul}; // unsigned long
    auto var7 {16ll}; // long

    //Double modifiers
    auto var8 {4.32f}; // float
    auto var9 {4.32l}; // long double

    std::cout << "Variable 1: " << var1;
    std::cout << ", Size: " << sizeof(var1) << std::endl;
    std::cout << "Variable 1: " << var2;
    std::cout << ", Size: " << sizeof(var2) << std::endl;
    std::cout << "Variable 1: " << var3;
    std::cout << ", Size: " << sizeof(var3) << std::endl;
    std::cout << "Variable 1: " << var4;
    std::cout << ", Size: " << sizeof(var4) << std::endl;
    std::cout << "Variable 1: " << var5;
    std::cout << ", Size: " << sizeof(var5) << std::endl;
    std::cout << "Variable 1: " << var6;
    std::cout << ", Size: " << sizeof(var6) << std::endl;
    std::cout << "Variable 1: " << var7;
    std::cout << ", Size: " << sizeof(var7) << std::endl;
    std::cout << "Variable 1: " << var8;
    std::cout << ", Size: " << sizeof(var8) << std::endl;
    std::cout << "Variable 1: " << var9;
    std::cout << ", Size: " << sizeof(var9) << std::endl;
    return 0;
}