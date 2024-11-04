#include <iostream>


int main(){

	short int short_int_1 {10};
	short int short_int_2 {20};
	
	char char_1 {40};
	char char_2 {50};
	
	std:: << "size of short int 1: " << sizeof(short_int_1) << std::endl;
	std::cout << "size of short int 2: " << sizeof(short_int_2) << std::endl;
	std::cout << "size of char 1: " << sizeof(char_1) << std::endl;
	std::cout << "size of char 2: " << sizeof(char_2) << std::endl;
	
	auto result1 = short_int_1 + short_int_2 ;
	auto result2 = char_1 + char_2;
	
	std::cout << "size of result1: " << sizeof(result1) << std::endl;
	std::cout << "size of result2: " << sizeof(result2) << std::endl;
	
    return 0;
}