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
    // WHILE LOOP
    // initialization expression
    i = 1;
  
    // test expression
    while (i < 6)
    {
        cout << "Hello World\n";
  
        // update expression
        i++;
    }

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