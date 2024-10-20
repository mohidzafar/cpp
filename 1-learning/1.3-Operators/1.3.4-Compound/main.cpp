#include <iostream>

using namespace std;

int main(){
    
	int value {45};
    
    cout << "The value is : " << value << endl;
    
    cout << endl;
    cout << "Addition" << endl;
    value +=5; // equivalent to value = value + 5
    cout << "Value : " << value << endl; // 50

    cout << endl;
    cout << "Subtraction" << endl;
    value -=5; // equivalent to value = value - 5
    cout << "Value : " << value << endl; // 45 

    cout << endl;
    cout << "Multiplication" << endl;
    value *=2;
    cout << "Value : " << value << endl; // 90

    cout << endl;
    cout << "Division" << endl;
    value /= 3;
    cout << "Value : " << value << endl; // 30

    cout << endl;
    cout << "Modulous" << endl;
    value %= 11;
    cout << "Value : " << value << endl;// 8
    return 0;
}