#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    
    cout << "Hello ";
    cout << "World";
    
    cout << endl;
    
    cout << "-------------" << endl;
    
    cout << "Hello " << endl;
    cout << "World " << endl;
    
    cout << endl;
    
    cout << "Hello\n";
    cout << "World\n";
    
    
    //===================================================================
    cout << endl;

    cout << "This is a nice message...." << endl << flush;

    //===================================================================
    cout << endl;


    cout << "\n<===== Unformatted table =====>\n" << endl;

    cout << "Daniel" << " " << "Gray" << " 25" << endl;
    cout << "Stanley" <<" "  << "Woods" << " 33" << endl;
    cout << "Jordan" << " "  << "Parker" << " 45" << endl;
    cout << "Joe" << " " << "Ball" << " 21" << endl;
    cout << "Josh" << " " << "Carr" << " 27" << endl;
    cout << "Izaiah" << " " << "Robinson" << " 29" << endl;

    cout << endl;

    //===================================================================

    cout << "\n<===== Formatted table =====>\n" << endl;

    cout << setw(2) << "" << setw(10) << "FirstName" << setw(10) << "LastName" << setw(5) << "Age" << endl;
    cout << endl;
    cout << setw(2) << "1." << setw(10) << "Daniel"  << setw(10) << "Gray" << setw(5) << "25" << endl;
    cout << setw(2) << "2." << setw(10) << "Stanley" << setw(10)  << "Woods" << setw(5) <<  "33" << endl;
    cout << setw(2) << "3." << setw(10) <<  "Jordan" << setw(10)  << "Parker" << setw(5) << "45" << endl;
    cout << setw(2) << "4." << setw(10) <<  "Joe" << setw(10) << "Ball" << setw(5) << "21" << endl;
    cout << setw(2) << "5." << setw(10) << "Josh" << setw(10) << "Carr" << setw(5) <<"27" << endl;
    cout << setw(2) << "6." << setw(10) << "Izaiah" << setw(10) << "Robinson" << setw(5) << "29" << endl;
    cout << "-----------------------------" << endl;

    //===================================================================

    cout << endl;
    cout << "<=== Formatted Table with Variables ===>" << endl;

    cout << endl;
    
    int col_width {10};
    
    
    cout << setw(col_width/5) << "" << setw(col_width) << "FirstName" << setw(col_width) << "LastName" << setw(col_width/2) << "Age" << endl;
    cout << endl;
    cout << setw(col_width/5) << "1." << setw(col_width) << "Daniel"  << setw(col_width) << "Gray" << setw(col_width/2) << "25" << endl;
    cout << setw(col_width/5) << "2." << setw(col_width) << "Stanley" << setw(col_width)  << "Woods" << setw(col_width/2) <<  "33" << endl;
    cout << setw(col_width/5) << "3." << setw(col_width) <<  "Jordan" << setw(col_width)  << "Parker" << setw(col_width/2) << "45" << endl;
    cout << setw(col_width/5) << "4." << setw(col_width) <<  "Joe" << setw(col_width) << "Ball" << setw(col_width/2) << "21" << endl;
    cout << setw(col_width/5) << "5." << setw(col_width) << "Josh" << setw(col_width) << "Carr" << setw(col_width/2) <<"27" << endl;
    cout << setw(col_width/5) << "6." << setw(col_width) << "Izaiah" << setw(col_width) << "Robinson" << setw(col_width/2) << "29" << endl;
    cout << "-----------------------------" << endl;

    cout << endl;

    //===================================================================

    cout << "<=== Right Justified Table ===>" << endl;

    cout << endl;

    col_width = 10;

    cout << right;
    cout << setw(col_width/5) << "" << setw(col_width) << "FirstName" << setw(col_width) << "LastName" << setw(col_width/2) << "Age" << endl;
    cout << endl;
    cout << setw(col_width/5) << "1." << setw(col_width) << "Daniel"  << setw(col_width) << "Gray" << setw(col_width/2) << "25" << endl;
    cout << setw(col_width/5) << "2." << setw(col_width) << "Stanley" << setw(col_width)  << "Woods" << setw(col_width/2) <<  "33" << endl;
    cout << setw(col_width/5) << "3." << setw(col_width) <<  "Jordan" << setw(col_width)  << "Parker" << setw(col_width/2) << "45" << endl;
    cout << setw(col_width/5) << "4." << setw(col_width) <<  "Joe" << setw(col_width) << "Ball" << setw(col_width/2) << "21" << endl;
    cout << setw(col_width/5) << "5." << setw(col_width) << "Josh" << setw(col_width) << "Carr" << setw(col_width/2) <<"27" << endl;
    cout << setw(col_width/5) << "6." << setw(col_width) << "Izaiah" << setw(col_width) << "Robinson" << setw(col_width/2) << "29" << endl;
    cout << "-----------------------------" << endl;

    cout << endl;

    //===================================================================

    cout << "<=== Left Justified Table ===>" << endl;

    cout << endl;

    col_width = 10;

    cout << left;
    cout << setw(col_width/5) << "" << setw(col_width) << "FirstName" << setw(col_width) << "LastName" << setw(col_width/2) << "Age" << endl;
    cout << endl;
    cout << setw(col_width/5) << "1." << setw(col_width) << "Daniel"  << setw(col_width) << "Gray" << setw(col_width/2) << "25" << endl;
    cout << setw(col_width/5) << "2." << setw(col_width) << "Stanley" << setw(col_width)  << "Woods" << setw(col_width/2) <<  "33" << endl;
    cout << setw(col_width/5) << "3." << setw(col_width) <<  "Jordan" << setw(col_width)  << "Parker" << setw(col_width/2) << "45" << endl;
    cout << setw(col_width/5) << "4." << setw(col_width) <<  "Joe" << setw(col_width) << "Ball" << setw(col_width/2) << "21" << endl;
    cout << setw(col_width/5) << "5." << setw(col_width) << "Josh" << setw(col_width) << "Carr" << setw(col_width/2) <<"27" << endl;
    cout << setw(col_width/5) << "6." << setw(col_width) << "Izaiah" << setw(col_width) << "Robinson" << setw(col_width/2) << "29" << endl;
    cout << "-----------------------------" << endl;

    cout << endl;

    //===================================================================

    return 0;

}