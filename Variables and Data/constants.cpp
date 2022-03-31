/**************************************************************
 *  2 ways to define a cont
 *      1. Using #define preprocessor directive
 *      2. Using a const keyword
 * 
 *  Literals: The values assigned to each constant variables are
 *  referred to as the literals. Generally, both terms,
 *  constants and literals are used interchangeably. 
 *  For eg, “const int = 5;“, is a constant expression and the 
 *  value 5 is referred to as constant integer literal. 
 * 
***************************************************************/
#include <iostream>
using namespace std;
   
int main() {
    // int constant
    const int intVal = 10; 

    // int const using #define
    #define integer 12
  
    // Real constant
    const float floatVal = 4.14;
   
    // char constant 
    const char charVal = 'A'; 
  
    // string constant
    const string stringVal = "ABC"; 
       
    cout << "Integer Constant: " << intVal << "\n"; 
    cout << "Integer Constant from #define: " << integer << "\n"; 
    cout << "Floating point Constant: " << floatVal << "\n"; 
    cout << "Character Constant: "<< charVal << "\n"; 
    cout << "String Constant: "<< stringVal << "\n";
       
    return 0; 
}