/*****************************************************************
 *  do {<code>}
 *  while(<condition>)
 *  do {<code>}
 *  while (i < 6)
 * 
 *  the do while loop executes the code and then checks if 
 *  <condition> is met. If <condition> == True, it will execute 
 *  again. If <condition> == False, it will exit the loop.
 *  Do While loops will always execute at least once.
******************************************************************/

#include <iostream>
using namespace std;

int i;

int main()
{
    //DO WHILE LOOP
    i = 2; // Initialization expression
  
    do
    {
        // loop body
        cout << "Hello World\n";
  
        // update expression
        i++;
  
    }  while (i < 1);   // test expression
  
    return 0;
}