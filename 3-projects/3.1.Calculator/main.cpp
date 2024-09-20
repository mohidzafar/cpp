#include <iostream>
#include <string>

using namespace std;

int main() {
    float value_1, value_2;
    char operate;
    cout << "Enter first value: ";
    cin >> value_1;
    cout << "Enter second value: ";
    cin >> value_2;
    cout << "Enter Operator: ";
    cin >> operate;
    if (operate == '+')
    {
        float sum = value_1 + value_2;
        cout << "Answer: " << sum << endl;
    }
    else if(operate == '-')
    {
        float diff = value_1 - value_2;
        cout << "Answer: " << diff << endl;
    }
    else if(operate == '*')
    {
        float product = value_1 * value_2;
        cout << "Answer: " << product << endl;
    }
    else if(operate == '/')
    {
        float divide = value_1 / value_2;
        cout << "Answer: " << divide << endl;
    }
    
    return 0;
}