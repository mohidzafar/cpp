#include <iostream>
#include <cmath>


int main() {
    double weight {7.7};
    double saving {-5000};

    std::cout << "\n<====Floor & Ceiling====>\n" << std::endl;
    std::cout << "Weight(floor): " << floor(weight) << std::endl;
    std::cout << "Weight(ceil) : " << ceil(weight) << std::endl; 

    std::cout << "\n<==== ABS ====>\n" << std::endl;
    std::cout << "Weight(ABS): " << abs(weight) << std::endl;
    std::cout << "Saving(ABS): " << abs(saving) << std::endl;

    std::cout << "\n<==== Exponent ====>\n" << std::endl;
    double exponential = exp(10);
    std::cout << "Exponential(10): " << exponential << std::endl;

    std::cout << "\n<==== Power ====>\n" << std::endl;
    std::cout << "3 ^ 4: " << pow(3,4) << std::endl;
    std::cout << "9 ^ 3: " << pow(9,3) << std::endl;

    std::cout << "\n<==== LOG ====>\n" << std::endl;
    std::cout << "Log(54.59):   " << log(54.59) << std::endl;
    std::cout << "Log10(10000): " << log10(10000) << std::endl;

    std::cout << "\n<==== Square Root ====>\n" << std::endl;
    std::cout << "Square Root(81): " << sqrt(81) << std::endl;
    std::cout << "Square Root(49): " << sqrt(49) << std::endl;

    std::cout << "\n<==== Round off ====>\n" << std::endl;
    std::cout << "Round Off(3.654) : " << round(3.654) << std::endl;
    std::cout << "Round Off(3.434) : " << round(3.434) << std::endl;
    std::cout << "Round Off(3.500) : " << round(3.500) << std::endl;
    return 0;
}