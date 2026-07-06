#include <iostream>
using namespace std;

int main()
{
  int x = 7;
  cout << (x = 18) << endl; // 18 use brackets to reassign inside cout.
  // augmented assignment operator.

  // x = x+1;
  cout << (x += 1) << endl;

  // x = x-1;
  cout << (x -= 2) << endl;

  // x = x*3;
  cout << (x *= 3) << endl;

  // x = x/3;
  cout << (x /= 3) << endl;

  // x = x%3;
  cout << (x %= 10) << endl;
}