#include <iostream>

using namespace std;

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

    cout << "Variable 1: " << var1;
    cout << ", Size: " << sizeof(var1) << endl;
    cout << "Variable 1: " << var2;
    cout << ", Size: " << sizeof(var2) << endl;
    cout << "Variable 1: " << var3;
    cout << ", Size: " << sizeof(var3) << endl;
    cout << "Variable 1: " << var4;
    cout << ", Size: " << sizeof(var4) << endl;
    cout << "Variable 1: " << var5;
    cout << ", Size: " << sizeof(var5) << endl;
    cout << "Variable 1: " << var6;
    cout << ", Size: " << sizeof(var6) << endl;
    cout << "Variable 1: " << var7;
    cout << ", Size: " << sizeof(var7) << endl;
    cout << "Variable 1: " << var8;
    cout << ", Size: " << sizeof(var8) << endl;
    cout << "Variable 1: " << var9;
    cout << ", Size: " << sizeof(var9) << endl;
    return 0;
}