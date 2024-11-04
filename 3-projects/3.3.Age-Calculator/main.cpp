
//
// UNDER DEVELOPMENT
//

#include <iostream>
#include <string>

using namespace std;

void age_calculator() {
    int b_year;
    int b_month;
    int b_date;

    int year;
    int month;
    int date;

    cout << "Enter Your Birth Year: ";
    cin >> b_year;
    cout << "Enter Your Birth Month: ";
    cin >> b_month;
    cout << "Enter Your Birth Date: ";
    cin >> b_date;

    year = 2024 - b_year;
    month = 9 - b_month;
    date = 22 - b_date;

    if(month < 0) {
        month = !month;
    }
    if(date < 0) {
        date = !date;
    }

    cout << "You are " << year << " years, " << month << " months and " << date << " days old" << endl; 
}

int main() {
    age_calculator();
    return 0;
}