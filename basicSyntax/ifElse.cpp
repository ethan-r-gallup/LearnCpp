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
 * 
 * switch statement
 *  Switch case statement evaluates a given expression and based on 
 *  the evaluated value(matching a certain condition), it executes 
 *  the statements associated with it.
 * Notes on switch statements:
 * 1) The expression provided in the switch should result in a 
 *    constant value otherwise it would not be valid.
 * 2) Duplicate case values are not allowed.
 * 3) The default statement is optional.
 * 4) The break statement is used inside the switch to terminate a 
 *    statement sequence. When a break statement is reached, the 
 *    switch terminates, and the flow of control jumps to the next 
 *    line following the switch statement.
 * 5) The break statement is optional. If omitted, execution will 
 *    continue on into the next case. The flow of control will fall 
 *    through to subsequent cases until a break is reached.
 * 6) Nesting of switch statements is allowed, which means you can 
 *    have switch statements inside another switch. However nested 
 *    switch statements should be avoided as it makes the program 
 *    more complex and less readable. 
 * 7) Switch statements are limited to integer values only in the 
 *    check condition.
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
    

    // SWITCH STATEMENT
    int x = 2;
    switch (x) {
    case 1:
        cout << "Choice is 1";
        break;
    case 2:
        cout << "Choice is 2";
        break;
    case 3:
        cout << "Choice is 3";
        break;
    default:
        cout << "Choice other than 1, 2 and 3";
        break;
    }
 
    return 0;
}