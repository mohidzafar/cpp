#include <iostream>

using namespace std;

int main() {
    int car = 700;
    int van = 1300;
    int bike = 200;
    int truck = 1600;
    int vehicle = car + truck + van + bike;

    cout << "\nNumber of Vehicles: " << vehicle << "\n" << endl;

    cout << "Number of Cars: " << car << endl;
    cout << "Number of Vans: " << van << endl;
    cout << "Number of Bike: " << bike << endl;
    cout << "Number of Truck: " << truck << "\n" << endl;

    cout << "Size of int: " << sizeof(int) << " Bytes" << endl;
    cout << "Size of truck variable: " << sizeof(truck) << " Bytes" << endl;
    return 0;
}