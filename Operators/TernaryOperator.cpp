/**********************************************************
 * evaluates a conditions and exacutes one of two commands
 * depending on ig the condition eveluates as true or false
 * 
 * syntax:
 * condition ? <execute if true> : <execute if false>
 * ********************************************************/

#include <iostream>
#include <string>
using namespace std;

int main() {
  double score;

  // get score from users
  cout << "Enter your score: ";
  cin >> score;

  // ternary operator checks if
  string result = (score >= 60) ? "passed" : "failed";

  cout << "You " << result << " the exam.";

  return 0;
}
