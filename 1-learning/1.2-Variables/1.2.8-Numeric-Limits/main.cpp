#include <iostream>
#include <limits>


int main() {
    std::cout << "\n<====NUMERIC LIMITS====>\n" << std::endl;
    std::cout << "Short:               " << numeric_limits<short>::min() << " to " << numeric_limits<short>::max() << std::endl;
    std::cout << "Unsigned Short:      " << numeric_limits<unsigned short>::min() << " to " << numeric_limits<unsigned short>::max() << std::endl;
    std::cout << "Int:                 " << numeric_limits<int>::min() << " to " << numeric_limits<int>::max() << std::endl;
    std::cout << "Unsigned Int:        " << numeric_limits<unsigned int>::min() << " to " << numeric_limits<unsigned int>::max() << std::endl;
    std::cout << "long:                " << numeric_limits<long>::min() << " to " << numeric_limits<long>::max() << std::endl;
    std::cout << "float:               " << numeric_limits<float>::min() << " to " << numeric_limits<float>::max() << std::endl;
    std::cout << "float(lowest):       " << numeric_limits<short>::min() << " to " << numeric_limits<short>::max() << std::endl;
    std::cout << "double(lowest):      " << numeric_limits<short>::min() << " to " << numeric_limits<short>::max() << std::endl;
    std::cout << "long double(lowest): " << numeric_limits<short>::min() << " to " << numeric_limits<short>::max() << std::endl;

    std::cout << "\n" << std::endl;

    std::cout << "Int(signed):         " << numeric_limits<int>::is_signed << std::endl;
    std::cout << "Int(Digits):         " << numeric_limits<int>::digits << std::endl;
}