#include <iostream>
#include <iomanip>


int main() {
    float float_var {3.234243242432543798735354543};
    double double_var {5.4324324678672975845284474};
    long double long_double {4.337487504758534502534585093258};

    std::cout << setprecision(20);
    std::cout << "float var: " << float_var << std::endl;
    std::cout << "double var: " << double_var << std::endl;
    std::cout << "long double: " << long_double << std::endl;

    std::cout << "<---------------------------------->" << std::endl;

    double sci_var1 {1.92400023e8};
    double sci_var2 {3.498e-5};

    std::cout << "Scientific Var 1: " << sci_var1 << std::endl;
    std::cout << "Scientific Var 2: " << sci_var2 << std::endl;

    return 0;
}