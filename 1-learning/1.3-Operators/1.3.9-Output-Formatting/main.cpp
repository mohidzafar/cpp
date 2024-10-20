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

    cout << "<=== Internal Justified Table ===>" << endl;

    cout << endl;

    cout << left;
    cout << setw(10) << -123.45 << endl;
    cout << right;
    cout << setw(10) << -123.45 << endl;
    cout << internal;
    cout << setw(10) << -123.45 << endl;
    cout << "-----------------------------" << endl;

    cout << endl;

    //===================================================================

    cout << "<=== Fill Characters Table ===>" << endl;

    cout << endl;

    col_width = 20;

    cout << left;
    cout << setfill('_');
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

    cout << "<===== BoolAlpha & NoBoolAlpha =====>" << endl;

    cout << endl;

    bool T_cond {true};
    bool F_cond {false};

    cout << "<=== Bool Alpha ===>" << endl;
    
    cout << endl;
    cout << boolalpha;
    cout << "T_Condition : " << T_cond << endl;
    cout << "F_Condition : " << F_cond << endl;
    cout << "-----------------------------" << endl;

    cout << endl;

    cout << "<=== No Bool Alpha ===>" << endl;

    cout << endl;
    cout << noboolalpha;
    cout << "T_Condition : " << T_cond << endl;
    cout << "F_Condition : " << F_cond << endl;
    cout << "-----------------------------" << endl;
    
    cout << endl;

    //===================================================================

    cout << "<===== ShowPos & NoShowPos =====>" << endl;

    int pos_num {34};
    int neg_num {-45};

    cout << endl;

    cout << "<=== Show Pos ===>" << endl;

    cout << endl;

    cout << showpos;
    cout << "Positive : " << pos_num << endl;
    cout << "Negative : " << neg_num << endl;
    cout << "-----------------------------" << endl;

    cout << endl;

    cout << noshowpos;
    cout << "Positive : " << pos_num << endl;
    cout << "Negative : " << neg_num << endl;
    cout << "-----------------------------" << endl;

    cout << endl;

    //===================================================================

    cout << "<===== Different Number Systems =====>" << endl;

    int pos_int {543243};
    int neg_int {-43225};
    double double_var {432.43};

    cout << endl;

    cout << "<=== Default Base Format ===>" << endl;

    cout << endl;

    cout << "Positive Int : " << pos_int << endl;
    cout << "Negative Int : " << neg_int << endl;
    cout << "Double Var   : " << double_var << endl;
    cout << "-----------------------------" << endl;

    cout << endl;

    cout << "<=== Positive Int ===>" << endl;
    
    cout << endl;

    cout << "Decimal     : " << dec << pos_int << endl;
    cout << "HexaDecimal : " << hex << pos_int << endl;
    cout << "Octal       : " << oct << pos_int << endl;
    cout << "-----------------------------" << endl;

    cout << endl;

    cout << "<=== Negative Int ===>" << endl;
    
    cout << endl;
    
    cout << "Decimal     : " << dec << neg_int << endl;
    cout << "HexaDecimal : " << hex << neg_int << endl;
    cout << "Octal       : " << oct << neg_int << endl;
    cout << "-----------------------------" << endl;

    cout << endl;

    cout << "<=== Double Variable ===>" << endl;
    
    cout << endl;

    cout << "Decimal     : " << dec << double_var << endl;
    cout << "HexaDecimal : " << hex << double_var << endl;
    cout << "Octal       : " << oct << double_var << endl;
    cout << "-----------------------------" << endl;

    cout << endl;

    //===================================================================

    cout << "<===== Upper & Lower Case =====>" << endl;

    pos_int = 717171;

    cout << endl;

    cout << endl;

    cout << "<=== LowerCase ===>" << endl;
    cout << "     (Default)      " << endl;
    
    cout << endl;

    cout << "Decimal     : " << dec << pos_int << endl;
    cout << "HexaDecimal : " << hex << pos_int << endl;
    cout << "Octal       : " << oct << pos_int << endl;
    cout << "-----------------------------" << endl;

    cout << endl;

    cout << "<=== UpperCase ===>" << endl;
    
    cout << endl;

    cout << uppercase;
    cout << "Decimal     : " << dec << pos_int << endl;
    cout << "HexaDecimal : " << hex << pos_int << endl;
    cout << "Octal       : " << oct << pos_int << endl;
    cout << "-----------------------------" << endl;

    //===================================================================

    cout << "<===== Fixed & Scientific =====>" << endl;

    double A {3.1415926535897932384626433832795};
    double B {2006.0};
    double C {1.34e-10};

    cout << endl;

    cout << "<=== Fixed ===>" << endl;

    cout << endl;

    cout << fixed;
    cout << "A : " << A << endl;
    cout << "B : " << B << endl;
    cout << "C : " << C << endl;
    cout << "-----------------------------" << endl;

    cout << endl;

    cout << "<=== Scientific ===>" << endl;

    cout << endl;

    cout << scientific;
    cout << "A : " << A << endl;
    cout << "B : " << B << endl;
    cout << "C : " << C << endl;
    cout << "-----------------------------" << endl;

    cout << endl;

    cout << "<=== Reset ===>" << endl;

    cout << endl;

    cout.unsetf(ios::scientific | ios::fixed);
    cout << "A : " << A << endl;
    cout << "B : " << B << endl;
    cout << "C : " << C << endl;
    cout << "-----------------------------" << endl;

    cout << endl;

    //===================================================================

    cout << "<===== Show & No Show Point =====>" << endl;

    double d {34.1};
    double e {101.99};
    double f {12.0};
    int    g {45};

    cout << endl;

    cout << "<=== No Show Point ===>" << endl;
    cout << "       (Default)       " << endl;

    cout << endl;

    cout << "D : " << d << endl;
    cout << "E : " << e << endl;
    cout << "F : " << f << endl;
    cout << "G : " << g << endl;
    cout << "-----------------------------" << endl;

    cout << endl;

    cout << "<=== Show Point ===>" << endl;

    cout << endl;

    cout << showpoint;
    cout << "D : " << d << endl;
    cout << "E : " << e << endl;
    cout << "F : " << f << endl;
    cout << "G : " << g << endl;
    cout << "-----------------------------" << endl;

    cout << endl;

    //===================================================================

    cout << "====================================" << endl;

    return 0;

}