#include <iostream>
using namespace std;

int GlobalNumber = 1; // global variable
void somefunc(); // function prototype

int main()
{
    cout << "the global number is " << GlobalNumber << endl;
    somefunc();
    cout<< "the global number is " << GlobalNumber << endl;
}

void somefunc()
{
    GlobalNumber = 44;
    cout << "executed somefunc\n";
}