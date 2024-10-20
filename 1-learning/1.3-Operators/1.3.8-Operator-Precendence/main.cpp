#include <iostream>

using namespace std;

int main(){

    int var_1 = 1;
    int var_2 = 2;
    int var_3 = 3;
    int var_4 = 4;
    int var_5 = 5;
    int var_6 = 6;
    int var_7 = 7;
        
    int result = var_1 + var_2 * var_3 -var_4/var_5 -var_6 + var_7;
    
    cout << "result: " << result << endl;

    result = var_1/var_2*var_3 + var_4 - var_5 + var_6;  
    cout << "result: " << result << endl;

    result = (var_1 + var_2) * var_3 -var_4/var_5 -var_6 + var_7; 
    cout << "result: " << result << endl;

    cout << "\n<========= OPERATOR PRECEDENCE =========>\n" << endl;

    cout << "<=== ORDER ===>" << endl;

    // Scope Resolution
    cout << "1. Scope Resolution: :: " << endl;

    // Postfix Operators
    cout << "2. Postfix Increment: ++ " << endl;
    cout << "3. Postfix Decrement: -- " << endl;
    cout << "4. Function Call: () " << endl;
    cout << "5. Array Subscript: [] " << endl;
    cout << "6. Member Access (object): . " << endl;
    cout << "7. Member Access (pointer): -> " << endl;

    // Unary Operators
    cout << "8. Unary Plus: + " << endl;
    cout << "9. Unary Minus: - " << endl;
    cout << "10. Logical NOT: ! " << endl;
    cout << "11. Bitwise NOT: ~ " << endl;
    cout << "12. Pre-Increment: ++ " << endl;
    cout << "13. Pre-Decrement: -- " << endl;
    cout << "14. Dereference: * " << endl;
    cout << "15. Address-of: & " << endl;
    cout << "16. Sizeof: sizeof " << endl;
    cout << "17. Typeid: typeid " << endl;

    // Pointer-to-member Operators
    cout << "18. Pointer-to-Member (object): .* " << endl;
    cout << "19. Pointer-to-Member (pointer): ->* " << endl;

    // Multiplicative Operators
    cout << "20. Multiplication: * " << endl;
    cout << "21. Division: / " << endl;
    cout << "22. Modulus: % " << endl;

    // Additive Operators
    cout << "23. Addition: + " << endl;
    cout << "24. Subtraction: - " << endl;

    // Shift Operators
    cout << "25. Left Shift: << " << endl;
    cout << "26. Right Shift: >> " << endl;

    // Relational Operators
    cout << "27. Less Than: < " << endl;
    cout << "28. Greater Than: > " << endl;
    cout << "29. Less Than or Equal To: <= " << endl;
    cout << "30. Greater Than or Equal To: >= " << endl;

    // Equality Operators
    cout << "31. Equality: == " << endl;
    cout << "32. Inequality: != " << endl;

    // Bitwise Operators
    cout << "33. Bitwise AND: & " << endl;
    cout << "34. Bitwise XOR: ^ " << endl;
    cout << "35. Bitwise OR: | " << endl;

    // Logical Operators
    cout << "36. Logical AND: && " << endl;
    cout << "37. Logical OR: || " << endl;

    // Ternary Operator
    cout << "38. Ternary Operator: ? : " << endl;

    // Assignment Operators
    cout << "39. Assignment: = " << endl;
    cout << "40. Addition Assignment: += " << endl;
    cout << "41. Subtraction Assignment: -= " << endl;
    cout << "42. Multiplication Assignment: *= " << endl;
    cout << "43. Division Assignment: /= " << endl;
    cout << "44. Modulus Assignment: %= " << endl;
    cout << "45. Bitwise AND Assignment: &= " << endl;
    cout << "46. Bitwise OR Assignment: |= " << endl;
    cout << "47. Bitwise XOR Assignment: ^= " << endl;
    cout << "48. Left Shift Assignment: <<= " << endl;
    cout << "49. Right Shift Assignment: >>= " << endl;

    // Comma Operator
    cout << "50. Comma Operator: , " << endl;
    
    return 0;
}