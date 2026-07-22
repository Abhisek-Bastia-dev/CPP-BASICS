#include <iostream>
using namespace std;

int fun(int a, int b = 8, string c = "abc")
{
  cout << a << " " << b << " " << c << endl;
}

int main()
{
  int a = 3;
  int b = 4;
  fun(2);
  fun(2, 6);
  return 0;
}