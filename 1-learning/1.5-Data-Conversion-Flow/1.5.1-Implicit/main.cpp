#include <iostream>

using namespace std;

int main() {
    int val_1 {14};
    double val_2 {23.42};

    auto result = val_1 * val_2;
    cout << "Result: " << result << endl;
    cout << "Size: " << sizeof(result) << endl;
    return 0;
}