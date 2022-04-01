/*****************************************************************
 *  while (<condition>) {<code>}
 *  while (i < 6) {}
 * 
 *  while loops will not execute unless <condition> is True.
******************************************************************/

#include <iostream>
using namespace std;

int i;

int main()
{
    
    i = 1;
  
    // test expression
    while (i < 6)
    {
        cout << "Hello World\n";
  
        // update expression
        i++;
    }
    return 0;
}