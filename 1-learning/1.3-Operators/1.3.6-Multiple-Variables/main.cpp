#include <iostream>

using namespace std;

int main(){

	short int short_int_1 {10};
	short int short_int_2 {20};
	
	char char_1 {40};
	char char_2 {50};
	
	cout << "size of short int 1: " << sizeof(short_int_1) << endl;
	cout << "size of short int 2: " << sizeof(short_int_2) << endl;
	cout << "size of char 1: " << sizeof(char_1) << endl;
	cout << "size of char 2: " << sizeof(char_2) << endl;
	
	auto result1 = short_int_1 + short_int_2 ;
	auto result2 = char_1 + char_2;
	
	cout << "size of result1: " << sizeof(result1) << endl;
	cout << "size of result2: " << sizeof(result2) << endl;
	
    return 0;
}