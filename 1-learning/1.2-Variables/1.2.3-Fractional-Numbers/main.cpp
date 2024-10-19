#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    float float_var {3.234243242432543798735354543};
    double double_var {5.4324324678672975845284474};
    long double long_double {4.337487504758534502534585093258};

    cout << setprecision(20);
    cout << "float var: " << float_var << endl;
    cout << "double var: " << double_var << endl;
    cout << "long double: " << long_double << endl;

    cout << "<---------------------------------->" << endl;

    double sci_var1 {1.92400023e8};
    double sci_var2 {3.498e-5};

    cout << "Scientific Var 1: " << sci_var1 << endl;
    cout << "Scientific Var 2: " << sci_var2 << endl;

    return 0;
}