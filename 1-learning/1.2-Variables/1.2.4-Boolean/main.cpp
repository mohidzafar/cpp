#include <iostream>

using namespace std;

int main() {
    bool age {false};
    bool height {true};

    if(age && height) {
        cout << "You are eligible to enter!" << endl;
    }
    else{
        cout << "You are not eligible to enter" << endl;
    }
    bool red_light {true};
    bool green_light {false};

    if(red_light == true && green_light == false) {
        cout << "STOP!" << endl;
    }
    else if(red_light == false && green_light == true){
        cout << "Go Through!" << endl;
    }
    else {
        cout << "Signal is not working!" << endl;
    }
    cout << "<--------------------------------------->" << endl;

    cout << "Size of bool: " << sizeof(bool) << endl;
    cout << "<--------------------------------------->"<< endl;

    cout << "Age: " << age << endl;
    cout << "Height: " << height << endl;
    cout << "<--------------------------------------->"<< endl;

    cout << "Red Light: " << red_light << endl;
    cout << "Green Light: " << green_light << endl;

    return 0;
}