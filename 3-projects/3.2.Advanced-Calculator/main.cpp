#include <iostream>
#include <string>

using namespace std;

int main() {
    float value_1, value_2;
    char operate;
    cout << "Enter Calculation: ";
    cin >> value_1;
    cin >> operate;
    cin >> value_2;
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