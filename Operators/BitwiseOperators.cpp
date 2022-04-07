/************************************************************************
 * BITWISE OPERATORS
 * every bitwise operator is performed on each bit of the number rather 
 * than a value.
 * &   performs AND on every bit of two numbers
 * |   performs OR on every bit of two numbers
 * ^   performs XOR on every bit of two numbers
 * <<  shifts the bits of the 1st operand LEFT the by the num of the 2nd
 * >>  shifts the bits of the 1st operand RIGHT the by the num of the 2nd
 * ~   inverts all the bits of a single operand
 * **********************************************************************/

#include <iostream>
using namespace std;
  
int main() {
      // a = 5(00000101), b = 9(00001001)
    int a = 5, b = 9;
  
    // The result is 00000001
    cout<<"a = " << a <<","<< " b = " << b <<endl;
    cout << "a & b = " << (a & b) << endl;
  
    // The result is 00001101
    cout << "a | b = " << (a | b) << endl;
  
    // The result is 00001100
    cout << "a ^ b = " << (a ^ b) << endl;
  
    // The result is 11111010
    cout << "~(" << a << ") = " << (~a) << endl;
  
    // The result is 00010010
    cout<<"b << 1" <<" = "<< (b << 1) <<endl;
  
    // The result is 00000100
    cout<<"b >> 1 "<<"= " << (b >> 1 )<<endl;
  
    return 0;
}