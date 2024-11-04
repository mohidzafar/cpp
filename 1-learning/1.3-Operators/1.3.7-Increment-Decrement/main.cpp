#include <iostream> 


int main() {
    int value {5};

    // Increment
    value = value + 1;
    std::cout << "Value: " << value << std::endl;

    value = 5;

    // Decreement
    value = value - 1;
    std::cout << "Value: " << value << std::endl;

    //=====================================================================

    std::cout << "\n<======= Postfix =======>\n" << std::endl;
    value = 5;
    std::cout << "\n=== Increment ===\n" << std::endl;
    std::cout << "Value(Incrementing): " << value++ << std::endl;
    std::cout << "Value(Incremented): " << value << std::endl;

    std::cout << std::endl;

    value = 5;

    std::cout << "\n=== Decrement ===\n" << std::endl;
    std::cout << "Value(Decrementing): " << value-- << std::endl;
    std::cout << "Value(Decremented): " << value << std::endl;

    //=====================================================================

    std::cout << "\n<======= Prefix =======>\n" << std::endl;

    value = 5;

    std::cout << "\n=== Increment ===\n" << std::endl;
    std::cout << "Value: " << ++value << std::endl;

    std::cout << std::endl;

    value = 5;

    std::cout << "\n=== Decrement ===\n" << std::endl;
    std::cout << "Value: " << --value << std::endl;

    value = 5;

    //=====================================================================

    return 0;
}