#include <iostream>
using namespace std;

int main()
{
  int a = 2, b = 5, c = 9;
  if (a > b && a > c)
  {
    cout << a << " is largest" << endl;
  }
  else if (b > a && b > c)
  {
    cout << b << " is largest" << endl;
  }
  else
  {
    cout << c << " is largest" << endl;
  }
}