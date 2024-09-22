#include <iostream>
#include <string>

using namespace std;

int main() {
    int age;
    string full_name;
    cout << "Enter Your Full Name: ";
    getline(cin, full_name);
    cout << "Enter Your Age: ";
    cin >> age;
    cout << "Your Name: " << full_name << endl;
    cout << "Your Age: " << age << endl;
}