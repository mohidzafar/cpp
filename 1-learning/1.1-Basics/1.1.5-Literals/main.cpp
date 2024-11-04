#include <iostream>


int main(){

    unsigned char unsigned_char {53u};
    
    short short_var {-32768}; 
    short int short_int {455};
    signed short signed_short {122}; 
    signed short int signed_short_int {-456};
    unsigned short int unsigned_short_int {5678U };
    
    const int int_var {55};
    signed signed_var {66}; 
    signed int signed_int {77}; 
    unsigned int unsigned_int {555U}; 
    
    long long_var {88L}; 
    long int long_int {33L};
    signed long signed_long {44l};
    signed long int signed_long_int {44l};
    unsigned long int unsigned_long_int {555ul};

    long long long_long {888ll};
    long long int long_long_int {999ll};
    signed long long signed_long_long {444ll};
    signed long long int signed_long_long_int{1234ll};
    
    unsigned int prize  {1'500'00'0u};
    std::cout << "Prize : " << prize << std::endl;

    std::cout << "signed long long int : " << signed_long_long_int << std::endl;
    
    unsigned int hex_number{ 0x22BU}; 
    int hex_number2 {0x400};
    std::cout << hex <<  "Hex Number : " << hex_number << std::endl;
    std::cout << dec <<  "Hex Number 2 : " << hex_number2 << std::endl;
    
    int black_color {0xffffff};
    std::cout << "Black color (dec) : " << dec << black_color << std::endl;

    int octal_number {0777u}; 
    std::cout << "Octal number : " << octal_number << std::endl;
    
    int error_octal {055}; // 55 don't exist in memory, it is 45
    std::cout << "Erronous octal number is : " << error_octal << std::endl;
    
    unsigned int binary_literal {0b11111111u};
    std::cout << "Binary Literal : " << binary_literal << std::endl;

    char char_literal {'c'};
    int number_literal {15};
    float fractional_literal {1.5f};
    string string_literal {"Hit the road"};
    
    std::cout << "char literal : " << char_literal << std::endl;
    std::cout << "Number literal : " << number_literal << std::endl;
    std::cout << "Fractional literal : " << fractional_literal << std::endl;
    std::cout << "String literal : " << string_literal << std::endl;
   
    return 0;
}
