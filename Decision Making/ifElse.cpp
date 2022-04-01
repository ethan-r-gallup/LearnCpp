/********************************************************************
 * if-else
 *  The if statement alone tells us that if a condition is true it 
 *  will execute a block of statements and if the condition is false 
 *  it won’t. But what if we want to do something else if the 
 *  condition is false. Here comes the C else statement. We can use 
 *  the else statement with if statement to execute a block of code 
 *  when the condition is false. 
 * 
 * if-else ladder
 *  Here, a user can decide among multiple options. The C if 
 *  statements are executed from the top down. As soon as one of the
 *  conditions controlling the if is true, the statement associated 
 *  with that if is executed, and the rest of the C else-if ladder is
 *  bypassed. If none of the conditions are true, then the final else
 *  statement will be executed. 
*********************************************************************/

#include <iostream>
using namespace std;
 
int main()
{
    int i = 10;
 
    if (i == 10)
    {
        //IF-ELSE
        // First if statement
        if (i < 15)
           cout<<"i is smaller than 15\n";
 
        // Nested - if statement
        // Will only be executed if statement above
        // is true
        if (i < 12)
            cout<<"i is smaller than 12 too\n";
        else
            cout<<"i is greater than 15";
    }

    //IF-ELSEIF LADDER
    i = 20;
  
    if (i == 10)
        cout<<"i is 10";
    else if (i == 15)
        cout<<"i is 15";
    else if (i == 20)
        cout<<"i is 20";
    else
        cout<<"i is not present";
 
    return 0;
}