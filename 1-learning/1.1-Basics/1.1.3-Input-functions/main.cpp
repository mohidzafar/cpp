#include <iostream>
#include <string>


int main() {
    int age;
    std::string full_name;
    std::cout << "Enter Your Full Name: ";
    getline(cin, full_name);
    std::cout << "Enter Your Age: ";
    cin >> age;
    std::cout << "Your Name: " << full_name << std::endl;
    std::cout << "Your Age: " << age << std::endl;
}