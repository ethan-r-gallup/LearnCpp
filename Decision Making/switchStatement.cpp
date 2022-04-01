/********************************************************************
 * SWITCH STATEMENT
 *  Switch case statement evaluates a given expression and based on 
 *  the evaluated value(matching a certain condition), it executes 
 *  the statements associated with it.
 * 
 * switch (<variable>) {
 *  case <value 1>:
 *      <code 1>;    <-- executes if <variable> == <value 1>
 *      break;
 *  case <value 2>:
 *      <code 2>;    <-- executes if <variable> == <value 2>
 *       break;
 *  case <value 3>:
 *      <code 3>;    <-- executes if <variable> == <value 3>
 *      break;
 *  default:
 *      <default code>;    <-- executes if none of the cases returned true
 *      break;
 *   }
 *
 *
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
    int x = 2;
    switch (x) {
    case 1:
        cout << "Choice is 1"; // executes if x == 1
        break;
    case 2:
        cout << "Choice is 2"; // executes if x == 2
        break;
    case 3:
        cout << "Choice is 3"; // executes if x == 3
        break;
    default:
        cout << "Choice other than 1, 2 and 3"; // executes if none of the cases are true
        break;
    }
 
    return 0;
}