#include <iostream>
#include <iomanip>


int main(){
    
    std::cout << "Hello ";
    std::cout << "World";
    
    std::cout << std::endl;
    
    std::cout << "-------------" << std::endl;
    
    std::cout << "Hello " << std::endl;
    std::cout << "World " << std::endl;
    
    std::cout << std::endl;
    
    std::cout << "Hello\n";
    std::cout << "World\n";
    
    
    //===================================================================
    std::cout << std::endl;

    std::cout << "This is a nice message...." << std::endl << flush;

    //===================================================================
    std::cout << std::endl;


    std::cout << "\n<===== Unformatted table =====>\n" << std::endl;

    std::cout << "Daniel" << " " << "Gray" << " 25" << std::endl;
    std::cout << "Stanley" <<" "  << "Woods" << " 33" << std::endl;
    std::cout << "Jordan" << " "  << "Parker" << " 45" << std::endl;
    std::cout << "Joe" << " " << "Ball" << " 21" << std::endl;
    std::cout << "Josh" << " " << "Carr" << " 27" << std::endl;
    std::cout << "Izaiah" << " " << "Robinson" << " 29" << std::endl;

    std::cout << std::endl;

    //===================================================================

    std::cout << "\n<===== Formatted table =====>\n" << std::endl;

    std::cout << setw(2) << "" << setw(10) << "FirstName" << setw(10) << "LastName" << setw(5) << "Age" << std::endl;
    std::cout << std::endl;
    std::cout << setw(2) << "1." << setw(10) << "Daniel"  << setw(10) << "Gray" << setw(5) << "25" << std::endl;
    std::cout << setw(2) << "2." << setw(10) << "Stanley" << setw(10)  << "Woods" << setw(5) <<  "33" << std::endl;
    std::cout << setw(2) << "3." << setw(10) <<  "Jordan" << setw(10)  << "Parker" << setw(5) << "45" << std::endl;
    std::cout << setw(2) << "4." << setw(10) <<  "Joe" << setw(10) << "Ball" << setw(5) << "21" << std::endl;
    std::cout << setw(2) << "5." << setw(10) << "Josh" << setw(10) << "Carr" << setw(5) <<"27" << std::endl;
    std::cout << setw(2) << "6." << setw(10) << "Izaiah" << setw(10) << "Robinson" << setw(5) << "29" << std::endl;
    std::cout << "-----------------------------" << std::endl;

    //===================================================================

    std::cout << std::endl;
    std::cout << "<=== Formatted Table with Variables ===>" << std::endl;

    std::cout << std::endl;
    
    int col_width {10};
    
    
    std::cout << setw(col_width/5) << "" << setw(col_width) << "FirstName" << setw(col_width) << "LastName" << setw(col_width/2) << "Age" << std::endl;
    std::cout << std::endl;
    std::cout << setw(col_width/5) << "1." << setw(col_width) << "Daniel"  << setw(col_width) << "Gray" << setw(col_width/2) << "25" << std::endl;
    std::cout << setw(col_width/5) << "2." << setw(col_width) << "Stanley" << setw(col_width)  << "Woods" << setw(col_width/2) <<  "33" << std::endl;
    std::cout << setw(col_width/5) << "3." << setw(col_width) <<  "Jordan" << setw(col_width)  << "Parker" << setw(col_width/2) << "45" << std::endl;
    std::cout << setw(col_width/5) << "4." << setw(col_width) <<  "Joe" << setw(col_width) << "Ball" << setw(col_width/2) << "21" << std::endl;
    std::cout << setw(col_width/5) << "5." << setw(col_width) << "Josh" << setw(col_width) << "Carr" << setw(col_width/2) <<"27" << std::endl;
    std::cout << setw(col_width/5) << "6." << setw(col_width) << "Izaiah" << setw(col_width) << "Robinson" << setw(col_width/2) << "29" << std::endl;
    std::cout << "-----------------------------" << std::endl;

    std::cout << std::endl;

    //===================================================================

    std::cout << "<=== Right Justified Table ===>" << std::endl;

    std::cout << std::endl;

    col_width = 10;

    std::cout << right;
    std::cout << setw(col_width/5) << "" << setw(col_width) << "FirstName" << setw(col_width) << "LastName" << setw(col_width/2) << "Age" << std::endl;
    std::cout << std::endl;
    std::cout << setw(col_width/5) << "1." << setw(col_width) << "Daniel"  << setw(col_width) << "Gray" << setw(col_width/2) << "25" << std::endl;
    std::cout << setw(col_width/5) << "2." << setw(col_width) << "Stanley" << setw(col_width)  << "Woods" << setw(col_width/2) <<  "33" << std::endl;
    std::cout << setw(col_width/5) << "3." << setw(col_width) <<  "Jordan" << setw(col_width)  << "Parker" << setw(col_width/2) << "45" << std::endl;
    std::cout << setw(col_width/5) << "4." << setw(col_width) <<  "Joe" << setw(col_width) << "Ball" << setw(col_width/2) << "21" << std::endl;
    std::cout << setw(col_width/5) << "5." << setw(col_width) << "Josh" << setw(col_width) << "Carr" << setw(col_width/2) <<"27" << std::endl;
    std::cout << setw(col_width/5) << "6." << setw(col_width) << "Izaiah" << setw(col_width) << "Robinson" << setw(col_width/2) << "29" << std::endl;
    std::cout << "-----------------------------" << std::endl;

    std::cout << std::endl;

    //===================================================================

    std::cout << "<=== Left Justified Table ===>" << std::endl;

    std::cout << std::endl;

    col_width = 10;

    std::cout << left;
    std::cout << setw(col_width/5) << "" << setw(col_width) << "FirstName" << setw(col_width) << "LastName" << setw(col_width/2) << "Age" << std::endl;
    std::cout << std::endl;
    std::cout << setw(col_width/5) << "1." << setw(col_width) << "Daniel"  << setw(col_width) << "Gray" << setw(col_width/2) << "25" << std::endl;
    std::cout << setw(col_width/5) << "2." << setw(col_width) << "Stanley" << setw(col_width)  << "Woods" << setw(col_width/2) <<  "33" << std::endl;
    std::cout << setw(col_width/5) << "3." << setw(col_width) <<  "Jordan" << setw(col_width)  << "Parker" << setw(col_width/2) << "45" << std::endl;
    std::cout << setw(col_width/5) << "4." << setw(col_width) <<  "Joe" << setw(col_width) << "Ball" << setw(col_width/2) << "21" << std::endl;
    std::cout << setw(col_width/5) << "5." << setw(col_width) << "Josh" << setw(col_width) << "Carr" << setw(col_width/2) <<"27" << std::endl;
    std::cout << setw(col_width/5) << "6." << setw(col_width) << "Izaiah" << setw(col_width) << "Robinson" << setw(col_width/2) << "29" << std::endl;
    std::cout << "-----------------------------" << std::endl;

    std::cout << std::endl;

    //===================================================================

    std::cout << "<=== Internal Justified Table ===>" << std::endl;

    std::cout << std::endl;

    std::cout << left;
    std::cout << setw(10) << -123.45 << std::endl;
    std::cout << right;
    std::cout << setw(10) << -123.45 << std::endl;
    std::cout << internal;
    std::cout << setw(10) << -123.45 << std::endl;
    std::cout << "-----------------------------" << std::endl;

    std::cout << std::endl;

    //===================================================================

    std::cout << "<=== Fill Characters Table ===>" << std::endl;

    std::cout << std::endl;

    col_width = 20;

    std::cout << left;
    std::cout << setfill('_');
    std::cout << setw(col_width/5) << "" << setw(col_width) << "FirstName" << setw(col_width) << "LastName" << setw(col_width/2) << "Age" << std::endl;
    std::cout << std::endl;
    std::cout << setw(col_width/5) << "1." << setw(col_width) << "Daniel"  << setw(col_width) << "Gray" << setw(col_width/2) << "25" << std::endl;
    std::cout << setw(col_width/5) << "2." << setw(col_width) << "Stanley" << setw(col_width)  << "Woods" << setw(col_width/2) <<  "33" << std::endl;
    std::cout << setw(col_width/5) << "3." << setw(col_width) <<  "Jordan" << setw(col_width)  << "Parker" << setw(col_width/2) << "45" << std::endl;
    std::cout << setw(col_width/5) << "4." << setw(col_width) <<  "Joe" << setw(col_width) << "Ball" << setw(col_width/2) << "21" << std::endl;
    std::cout << setw(col_width/5) << "5." << setw(col_width) << "Josh" << setw(col_width) << "Carr" << setw(col_width/2) <<"27" << std::endl;
    std::cout << setw(col_width/5) << "6." << setw(col_width) << "Izaiah" << setw(col_width) << "Robinson" << setw(col_width/2) << "29" << std::endl;
    std::cout << "-----------------------------" << std::endl;

    std::cout << std::endl;

    //===================================================================

    std::cout << "<===== BoolAlpha & NoBoolAlpha =====>" << std::endl;

    std::cout << std::endl;

    bool T_cond {true};
    bool F_cond {false};

    std::cout << "<=== Bool Alpha ===>" << std::endl;
    
    std::cout << std::endl;
    std::cout << boolalpha;
    std::cout << "T_Condition : " << T_cond << std::endl;
    std::cout << "F_Condition : " << F_cond << std::endl;
    std::cout << "-----------------------------" << std::endl;

    std::cout << std::endl;

    std::cout << "<=== No Bool Alpha ===>" << std::endl;

    std::cout << std::endl;
    std::cout << noboolalpha;
    std::cout << "T_Condition : " << T_cond << std::endl;
    std::cout << "F_Condition : " << F_cond << std::endl;
    std::cout << "-----------------------------" << std::endl;
    
    std::cout << std::endl;

    //===================================================================

    std::cout << "<===== ShowPos & NoShowPos =====>" << std::endl;

    int pos_num {34};
    int neg_num {-45};

    std::cout << std::endl;

    std::cout << "<=== Show Pos ===>" << std::endl;

    std::cout << std::endl;

    std::cout << showpos;
    std::cout << "Positive : " << pos_num << std::endl;
    std::cout << "Negative : " << neg_num << std::endl;
    std::cout << "-----------------------------" << std::endl;

    std::cout << std::endl;

    std::cout << noshowpos;
    std::cout << "Positive : " << pos_num << std::endl;
    std::cout << "Negative : " << neg_num << std::endl;
    std::cout << "-----------------------------" << std::endl;

    std::cout << std::endl;

    //===================================================================

    std::cout << "<===== Different Number Systems =====>" << std::endl;

    int pos_int {543243};
    int neg_int {-43225};
    double double_var {432.43};

    std::cout << std::endl;

    std::cout << "<=== Default Base Format ===>" << std::endl;

    std::cout << std::endl;

    std::cout << "Positive Int : " << pos_int << std::endl;
    std::cout << "Negative Int : " << neg_int << std::endl;
    std::cout << "Double Var   : " << double_var << std::endl;
    std::cout << "-----------------------------" << std::endl;

    std::cout << std::endl;

    std::cout << "<=== Positive Int ===>" << std::endl;
    
    std::cout << std::endl;

    std::cout << "Decimal     : " << dec << pos_int << std::endl;
    std::cout << "HexaDecimal : " << hex << pos_int << std::endl;
    std::cout << "Octal       : " << oct << pos_int << std::endl;
    std::cout << "-----------------------------" << std::endl;

    std::cout << std::endl;

    std::cout << "<=== Negative Int ===>" << std::endl;
    
    std::cout << std::endl;
    
    std::cout << "Decimal     : " << dec << neg_int << std::endl;
    std::cout << "HexaDecimal : " << hex << neg_int << std::endl;
    std::cout << "Octal       : " << oct << neg_int << std::endl;
    std::cout << "-----------------------------" << std::endl;

    std::cout << std::endl;

    std::cout << "<=== Double Variable ===>" << std::endl;
    
    std::cout << std::endl;

    std::cout << "Decimal     : " << dec << double_var << std::endl;
    std::cout << "HexaDecimal : " << hex << double_var << std::endl;
    std::cout << "Octal       : " << oct << double_var << std::endl;
    std::cout << "-----------------------------" << std::endl;

    std::cout << std::endl;

    //===================================================================

    std::cout << "<===== Upper & Lower Case =====>" << std::endl;

    pos_int = 717171;

    std::cout << std::endl;

    std::cout << std::endl;

    std::cout << "<=== LowerCase ===>" << std::endl;
    std::cout << "     (Default)      " << std::endl;
    
    std::cout << std::endl;

    std::cout << "Decimal     : " << dec << pos_int << std::endl;
    std::cout << "HexaDecimal : " << hex << pos_int << std::endl;
    std::cout << "Octal       : " << oct << pos_int << std::endl;
    std::cout << "-----------------------------" << std::endl;

    std::cout << std::endl;

    std::cout << "<=== UpperCase ===>" << std::endl;
    
    std::cout << std::endl;

    std::cout << uppercase;
    std::cout << "Decimal     : " << dec << pos_int << std::endl;
    std::cout << "HexaDecimal : " << hex << pos_int << std::endl;
    std::cout << "Octal       : " << oct << pos_int << std::endl;
    std::cout << "-----------------------------" << std::endl;

    //===================================================================

    std::cout << "<===== Fixed & Scientific =====>" << std::endl;

    double A {3.1415926535897932384626433832795};
    double B {2006.0};
    double C {1.34e-10};

    std::cout << std::endl;

    std::cout << "<=== Fixed ===>" << std::endl;

    std::cout << std::endl;

    std::cout << fixed;
    std::cout << "A : " << A << std::endl;
    std::cout << "B : " << B << std::endl;
    std::cout << "C : " << C << std::endl;
    std::cout << "-----------------------------" << std::endl;

    std::cout << std::endl;

    std::cout << "<=== Scientific ===>" << std::endl;

    std::cout << std::endl;

    std::cout << scientific;
    std::cout << "A : " << A << std::endl;
    std::cout << "B : " << B << std::endl;
    std::cout << "C : " << C << std::endl;
    std::cout << "-----------------------------" << std::endl;

    std::cout << std::endl;

    std::cout << "<=== Reset ===>" << std::endl;

    std::cout << std::endl;

    std::cout.unsetf(ios::scientific | ios::fixed);
    std::cout << "A : " << A << std::endl;
    std::cout << "B : " << B << std::endl;
    std::cout << "C : " << C << std::endl;
    std::cout << "-----------------------------" << std::endl;

    std::cout << std::endl;

    //===================================================================

    std::cout << "<===== Show & No Show Point =====>" << std::endl;

    double d {34.1};
    double e {101.99};
    double f {12.0};
    int    g {45};

    std::cout << std::endl;

    std::cout << "<=== No Show Point ===>" << std::endl;
    std::cout << "       (Default)       " << std::endl;

    std::cout << std::endl;

    std::cout << "D : " << d << std::endl;
    std::cout << "E : " << e << std::endl;
    std::cout << "F : " << f << std::endl;
    std::cout << "G : " << g << std::endl;
    std::cout << "-----------------------------" << std::endl;

    std::cout << std::endl;

    std::cout << "<=== Show Point ===>" << std::endl;

    std::cout << std::endl;

    std::cout << showpoint;
    std::cout << "D : " << d << std::endl;
    std::cout << "E : " << e << std::endl;
    std::cout << "F : " << f << std::endl;
    std::cout << "G : " << g << std::endl;
    std::cout << "-----------------------------" << std::endl;

    std::cout << std::endl;

    //===================================================================

    std::cout << "====================================" << std::endl;

    return 0;

}