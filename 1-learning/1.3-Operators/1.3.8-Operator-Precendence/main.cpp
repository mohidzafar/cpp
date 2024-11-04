#include <iostream>


int main(){

    int var_1 = 1;
    int var_2 = 2;
    int var_3 = 3;
    int var_4 = 4;
    int var_5 = 5;
    int var_6 = 6;
    int var_7 = 7;
        
    int result = var_1 + var_2 * var_3 -var_4/var_5 -var_6 + var_7;
    
    std::cout << "result: " << result << std::endl;

    result = var_1/var_2*var_3 + var_4 - var_5 + var_6;  
    std::cout << "result: " << result << std::endl;

    result = (var_1 + var_2) * var_3 -var_4/var_5 -var_6 + var_7; 
    std::cout << "result: " << result << std::endl;

    std::cout << "\n<========= OPERATOR PRECEDENCE =========>\n" << std::endl;

    std::cout << "<=== ORDER ===>" << std::endl;

    // Scope Resolution
    std::cout << "1. Scope Resolution: :: " << std::endl;

    // Postfix Operators
    std::cout << "2. Postfix Increment: ++ " << std::endl;
    std::cout << "3. Postfix Decrement: -- " << std::endl;
    std::cout << "4. Function Call: () " << std::endl;
    std::cout << "5. Array Subscript: [] " << std::endl;
    std::cout << "6. Member Access (object): . " << std::endl;
    std::cout << "7. Member Access (pointer): -> " << std::endl;

    // Unary Operators
    std::cout << "8. Unary Plus: + " << std::endl;
    std::cout << "9. Unary Minus: - " << std::endl;
    std::cout << "10. Logical NOT: ! " << std::endl;
    std::cout << "11. Bitwise NOT: ~ " << std::endl;
    std::cout << "12. Pre-Increment: ++ " << std::endl;
    std::cout << "13. Pre-Decrement: -- " << std::endl;
    std::cout << "14. Dereference: * " << std::endl;
    std::cout << "15. Address-of: & " << std::endl;
    std::cout << "16. Sizeof: sizeof " << std::endl;
    std::cout << "17. Typeid: typeid " << std::endl;

    // Pointer-to-member Operators
    std::cout << "18. Pointer-to-Member (object): .* " << std::endl;
    std::cout << "19. Pointer-to-Member (pointer): ->* " << std::endl;

    // Multiplicative Operators
    std::cout << "20. Multiplication: * " << std::endl;
    std::cout << "21. Division: / " << std::endl;
    std::cout << "22. Modulus: % " << std::endl;

    // Additive Operators
    std::cout << "23. Addition: + " << std::endl;
    std::cout << "24. Subtraction: - " << std::endl;

    // Shift Operators
    std::cout << "25. Left Shift: << " << std::endl;
    std::cout << "26. Right Shift: >> " << std::endl;

    // Relational Operators
    std::cout << "27. Less Than: < " << std::endl;
    std::cout << "28. Greater Than: > " << std::endl;
    std::cout << "29. Less Than or Equal To: <= " << std::endl;
    std::cout << "30. Greater Than or Equal To: >= " << std::endl;

    // Equality Operators
    std::cout << "31. Equality: == " << std::endl;
    std::cout << "32. Inequality: != " << std::endl;

    // Bitwise Operators
    std::cout << "33. Bitwise AND: & " << std::endl;
    std::cout << "34. Bitwise XOR: ^ " << std::endl;
    std::cout << "35. Bitwise OR: | " << std::endl;

    // Logical Operators
    std::cout << "36. Logical AND: && " << std::endl;
    std::cout << "37. Logical OR: || " << std::endl;

    // Ternary Operator
    std::cout << "38. Ternary Operator: ? : " << std::endl;

    // Assignment Operators
    std::cout << "39. Assignment: = " << std::endl;
    std::cout << "40. Addition Assignment: += " << std::endl;
    std::cout << "41. Subtraction Assignment: -= " << std::endl;
    std::cout << "42. Multiplication Assignment: *= " << std::endl;
    std::cout << "43. Division Assignment: /= " << std::endl;
    std::cout << "44. Modulus Assignment: %= " << std::endl;
    std::cout << "45. Bitwise AND Assignment: &= " << std::endl;
    std::cout << "46. Bitwise OR Assignment: |= " << std::endl;
    std::cout << "47. Bitwise XOR Assignment: ^= " << std::endl;
    std::cout << "48. Left Shift Assignment: <<= " << std::endl;
    std::cout << "49. Right Shift Assignment: >>= " << std::endl;

    // Comma Operator
    std::cout << "50. Comma Operator: , " << std::endl;
    
    return 0;
}