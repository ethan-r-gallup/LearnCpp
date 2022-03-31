/***********************************************************************
 * Primitive Data Types: These data types are built-in or predefined
 * data types and can be used directly by the user to declare variables.
 * Integer: 
 *    Keyword used for integer data types is int. Integers typically 
 *    requires 4 bytes of memory space and ranges from -2147483648 to 
 *    2147483647. 
 * Character: 
 *    Character data type is used for storing characters. Keyword used 
 *    for character data type is char. Characters typically requires 1 
 *    byte of memory space and ranges from -128 to 127 or 0 to 255. 
 * Boolean: 
 *    Boolean data type is used for storing boolean or logical values. 
 *    A boolean variable can store either true or false. Keyword used 
 *    for boolean data type is bool. 
 * Floating Point: 
 *    Floating Point data type is used for storing single precision 
 *    floating point values or decimal values. Keyword used for floating 
 *    point data type is float. Float variables typically requires 4 
 *    byte of memory space. 
 * Double Floating Point: 
 *    Double Floating Point data type is used for storing double 
 *    precision floating point values or decimal values. Keyword used 
 *    for double floating point data type is double. Double variables 
 *    typically requires 8 byte of memory space. 
 * void: 
 *    Void means without any value. void datatype represents a valueless 
 *    entity. Void data type is used for those function which does not 
 *    returns a value. 
 * Wide Character: 
 *    Wide character data type is also a character data type but this 
 *    data type has size greater than the normal 8-bit datatype. 
 *    Represented by wchar_t. It is generally 2 or 4 bytes long. 
 ***********************************************************************/
#include <iostream>
#include <cstdio>
#include <typeinfo>
using namespace std;



int main() {
    int integer_;  
    char character_;
    bool boolean_;
    float float_; 
    double double_;
    long LongDouble_; 
    integer_ = 11;
    character_ = 'a';
    boolean_ = true;
    float_ = 0.001;
    double_ = 0.001;
    LongDouble_ = 0.001;

    cout << "Size of char : " << sizeof(char)
      << " byte" << endl;
    cout << "Size of int : " << sizeof(int)
      << " bytes" << endl;
    cout << "Size of short int : " << sizeof(short int)
      << " bytes" << endl;
    cout << "Size of long int : " << sizeof(long int)
       << " bytes" << endl;
    cout << "Size of signed long int : " << sizeof(signed long int)
       << " bytes" << endl;
    cout << "Size of unsigned long int : " << sizeof(unsigned long int)
       << " bytes" << endl;
    cout << "Size of float : " << sizeof(float)
       << " bytes" <<endl;
    cout << "Size of double : " << sizeof(double)
       << " bytes" << endl;
    cout << "Size of wchar_t : " << sizeof(wchar_t)
       << " bytes" <<endl;
    return 0;
}