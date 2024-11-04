#include <iostream>



int main() {
    bool age {false};
    bool height {true};

    if(age && height) {
        std::cout << "You are eligible to enter!" << std::endl;
    }
    else{
        std::cout << "You are not eligible to enter" << std::endl;
    }
    bool red_light {true};
    bool green_light {false};

    if(red_light == true && green_light == false) {
        std::cout << "STOP!" << std::endl;
    }
    else if(red_light == false && green_light == true){
        std::cout << "Go Through!" << std::endl;
    }
    else {
        std::cout << "Signal is not working!" << std::endl;
    }
    std::cout << "<--------------------------------------->" << std::endl;

    std::cout << "Size of bool: " << sizeof(bool) << std::endl;
    std::cout << "<--------------------------------------->"<< std::endl;

    std::cout << "Age: " << age << std::endl;
    std::cout << "Height: " << height << std::endl;
    std::cout << "<--------------------------------------->"<< std::endl;

    std::cout << "Red Light: " << red_light << std::endl;
    std::cout << "Green Light: " << green_light << std::endl;

    return 0;
}