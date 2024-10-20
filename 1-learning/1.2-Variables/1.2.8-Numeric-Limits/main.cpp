#include <iostream>
#include <limits>

using namespace std;

int main() {
    cout << "\n<====NUMERIC LIMITS====>\n" << endl;
    cout << "Short:               " << numeric_limits<short>::min() << " to " << numeric_limits<short>::max() << endl;
    cout << "Unsigned Short:      " << numeric_limits<unsigned short>::min() << " to " << numeric_limits<unsigned short>::max() << endl;
    cout << "Int:                 " << numeric_limits<int>::min() << " to " << numeric_limits<int>::max() << endl;
    cout << "Unsigned Int:        " << numeric_limits<unsigned int>::min() << " to " << numeric_limits<unsigned int>::max() << endl;
    cout << "long:                " << numeric_limits<long>::min() << " to " << numeric_limits<long>::max() << endl;
    cout << "float:               " << numeric_limits<float>::min() << " to " << numeric_limits<float>::max() << endl;
    cout << "float(lowest):       " << numeric_limits<short>::min() << " to " << numeric_limits<short>::max() << endl;
    cout << "double(lowest):      " << numeric_limits<short>::min() << " to " << numeric_limits<short>::max() << endl;
    cout << "long double(lowest): " << numeric_limits<short>::min() << " to " << numeric_limits<short>::max() << endl;

    cout << "\n" << endl;

    cout << "Int(signed):         " << numeric_limits<int>::is_signed << endl;
    cout << "Int(Digits):         " << numeric_limits<int>::digits << endl;
}