#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    cout << endl;

    cout << "    <===== Organised Table =====>" << endl;

    int col_width {10};

    cout << setw(col_width) << "______________________________________" << endl;

    cout << left;
    cout << setw(col_width/5) << "|" << setw(col_width/5) << "Sr# " << setw(col_width/5) << "|" << setw(col_width) << "FirstName" << setw(col_width/5) << "|" << setw(col_width) << "LastName" << setw(col_width/5) << "|" << setw(col_width/2) << " Age" << setw(col_width/5) << "|" << endl;
    cout << setw(col_width) << "|_____|___________|___________|______|" << endl;
    cout << setw(col_width/5) << "|" << setw(col_width/5) << " 1. " << setw(col_width/5) << "|" << setw(col_width) << "Morgan"    << setw(col_width/5) << "|" << setw(col_width) << "Hills"    << setw(col_width/5) << "|" << setw(col_width/2) << " 27"  << setw(col_width/5) << "|" << endl;
    cout << setw(col_width) << "|_____|___________|___________|______|" << endl;
    cout << setw(col_width/5) << "|" << setw(col_width/5) << " 2. " << setw(col_width/5) << "|" << setw(col_width) << "Daniel"    << setw(col_width/5) << "|" << setw(col_width) << "Clay"     << setw(col_width/5) << "|" << setw(col_width/2) << " 32"  << setw(col_width/5) << "|" << endl;
    cout << setw(col_width) << "|_____|___________|___________|______|" << endl;
    cout << setw(col_width/5) << "|" << setw(col_width/5) << " 3. " << setw(col_width/5) << "|" << setw(col_width) << "Kevin"     << setw(col_width/5) << "|" << setw(col_width) << "Jenson"   << setw(col_width/5) << "|" << setw(col_width/2) << " 21"  << setw(col_width/5) << "|" << endl;
    cout << setw(col_width) << "|_____|___________|___________|______|" << endl;
    cout << setw(col_width/5) << "|" << setw(col_width/5) << " 4. " << setw(col_width/5) << "|" << setw(col_width) << "Hartley"   << setw(col_width/5) << "|" << setw(col_width) << "Robinson" << setw(col_width/5) << "|" << setw(col_width/2) << " 57"  << setw(col_width/5) << "|" << endl;
    cout << setw(col_width) << "|_____|___________|___________|______|" << endl;
    cout << setw(col_width/5) << "|" << setw(col_width/5) << " 5. " << setw(col_width/5) << "|" << setw(col_width) << "Arthur"    << setw(col_width/5) << "|" << setw(col_width) << "Woods"    << setw(col_width/5) << "|" << setw(col_width/2) << " 37"  << setw(col_width/5) << "|" << endl;
    cout << setw(col_width) << "|_____|___________|___________|______|" << endl;
    cout << setw(col_width/5) << "|" << setw(col_width/5) << " 6. " << setw(col_width/5) << "|" << setw(col_width) << "Stanley"   << setw(col_width/5) << "|" << setw(col_width) << "Robinson" << setw(col_width/5) << "|" << setw(col_width/2) << " 19"  << setw(col_width/5) << "|" << endl;
    cout << setw(col_width) << "|_____|___________|___________|______|" << endl;
    cout << endl;
    return 0;
}