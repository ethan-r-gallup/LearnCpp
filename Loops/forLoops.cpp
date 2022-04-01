/*****************************************************************
 *  for (<variable>; <condition>; <action>) {<code>}
 *  for (int i = 1; i <= 10; i++) {}
 * 
 *  for loop will repeat <action> and the contents of the brackets
 *  unless <condition> is False.
******************************************************************/

#include <iostream>
using namespace std;

int i;

int main()
{
    // FOR LOOP
    for (int i = 1; i <= 10; i++)
    {
        cout << "Hello World\n";
    }
    
    return 0;
}