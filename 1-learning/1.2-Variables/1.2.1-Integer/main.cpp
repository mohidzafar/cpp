#include <iostream>


int main() {
    int car = 700;
    int van = 1300;
    int bike = 200;
    int truck = 1600;
    int vehicle = car + truck + van + bike;

    std::cout << "\nNumber of Vehicles: " << vehicle << "\n" << std::endl;

    std::cout << "Number of Cars: " << car << std::endl;
    std::cout << "Number of Vans: " << van << std::endl;
    std::cout << "Number of Bike: " << bike << std::endl;
    std::cout << "Number of Truck: " << truck << "\n" << std::endl;

    std::cout << "Size of int: " << sizeof(int) << " Bytes" << std::endl;
    std::cout << "Size of truck variable: " << sizeof(truck) << " Bytes" << std::endl;
    return 0;
}