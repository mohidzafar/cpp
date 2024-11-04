#include <iostream>


int main(){
    
	int value {45};
    
    std::cout << "The value is : " << value << std::endl;
    
    std::cout << std::endl;
    std::cout << "Addition" << std::endl;
    value +=5; // equivalent to value = value + 5
    std::cout << "Value : " << value << std::endl; // 50

    std::cout << std::endl;
    std::cout << "Subtraction" << std::endl;
    value -=5; // equivalent to value = value - 5
    std::cout << "Value : " << value << std::endl; // 45 

    std::cout << std::endl;
    std::cout << "Multiplication" << std::endl;
    value *=2;
    std::cout << "Value : " << value << std::endl; // 90

    std::cout << std::endl;
    std::cout << "Division" << std::endl;
    value /= 3;
    std::cout << "Value : " << value << std::endl; // 30

    std::cout << std::endl;
    std::cout << "Modulous" << std::endl;
    value %= 11;
    std::cout << "Value : " << value << std::endl;// 8
    return 0;
}