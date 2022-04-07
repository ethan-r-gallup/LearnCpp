/***************************************************************
 * An array is a series of elements of the same type placed in 
 * contiguous memory locations that can be individually 
 * referenced by adding an index to a unique identifier. That 
 * means that, for example, five values of type int can be 
 * declared as an array without having to declare 5 different 
 * variables (each with its own identifier). Instead, using an 
 * array, the five int values are stored in contiguous memory 
 * locations, and all five can be accessed using the same 
 * identifier, with the proper index.
 * https://www.cplusplus.com/doc/tutorial/arrays/
 * 
 * SYNTAX
 *  initiallizing arrays:
 *      int arr [size] = { };
 *  assigning values:
 *      arr [2] = 75;
 *  retreiving values:
 *      x = arr[2];
 *  
 ***************************************************************/

#include <iostream>
using namespace std;
  
int main()
{
    int arr[5];
    arr[0] = 5;
    arr[2] = -10;
  
    // this is same as arr[1] = 2
    arr[3 / 2] = 2;
    arr[3] = arr[0];
  
    cout << arr[0] << " " << arr[1] << " " << arr[2] << " "
         << arr[3];
  
    return 0;
}