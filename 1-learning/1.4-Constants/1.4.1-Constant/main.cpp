# include <iostream>


int main() {
    const int pin_1 {17};
    const int pin_2 {13};

    //pin_1 = 27; Can't Modify

    // Ultimately You can do this to modify a constant:

    int pin_3 {pin_1 + 10};

    std::cout << "Pin 1: " << pin_1 << std::endl;
    std::cout << "Pin 2: " << pin_2 << std::endl;
    std::cout << "Pin 3: " << pin_3 << std::endl;
    return 0;
    
}