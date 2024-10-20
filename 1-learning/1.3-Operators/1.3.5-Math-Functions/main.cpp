#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double weight {7.7};
    double saving {-5000};

    cout << "\n<====Floor & Ceiling====>\n" << endl;
    cout << "Weight(floor): " << floor(weight) << endl;
    cout << "Weight(ceil) : " << ceil(weight) << endl; 

    cout << "\n<==== ABS ====>\n" << endl;
    cout << "Weight(ABS): " << abs(weight) << endl;
    cout << "Saving(ABS): " << abs(saving) << endl;

    cout << "\n<==== Exponent ====>\n" << endl;
    double exponential = exp(10);
    cout << "Exponential(10): " << exponential << endl;

    cout << "\n<==== Power ====>\n" << endl;
    cout << "3 ^ 4: " << pow(3,4) << endl;
    cout << "9 ^ 3: " << pow(9,3) << endl;

    cout << "\n<==== LOG ====>\n" << endl;
    cout << "Log(54.59):   " << log(54.59) << endl;
    cout << "Log10(10000): " << log10(10000) << endl;

    cout << "\n<==== Square Root ====>\n" << endl;
    cout << "Square Root(81): " << sqrt(81) << endl;
    cout << "Square Root(49): " << sqrt(49) << endl;

    cout << "\n<==== Round off ====>\n" << endl;
    cout << "Round Off(3.654) : " << round(3.654) << endl;
    cout << "Round Off(3.434) : " << round(3.434) << endl;
    cout << "Round Off(3.500) : " << round(3.500) << endl;
    return 0;
}