#include <iostream> 

using namespace std;

int main() {
    int value {5};

    // Increment
    value = value + 1;
    cout << "Value: " << value << endl;

    value = 5;

    // Decreement
    value = value - 1;
    cout << "Value: " << value << endl;

    //=====================================================================

    cout << "\n<======= Postfix =======>\n" << endl;
    value = 5;
    cout << "\n=== Increment ===\n" << endl;
    cout << "Value(Incrementing): " << value++ << endl;
    cout << "Value(Incremented): " << value << endl;

    cout << endl;

    value = 5;

    cout << "\n=== Decrement ===\n" << endl;
    cout << "Value(Decrementing): " << value-- << endl;
    cout << "Value(Decremented): " << value << endl;

    //=====================================================================

    cout << "\n<======= Prefix =======>\n" << endl;

    value = 5;

    cout << "\n=== Increment ===\n" << endl;
    cout << "Value: " << ++value << endl;

    cout << endl;

    value = 5;

    cout << "\n=== Decrement ===\n" << endl;
    cout << "Value: " << --value << endl;

    value = 5;

    //=====================================================================

    return 0;
}