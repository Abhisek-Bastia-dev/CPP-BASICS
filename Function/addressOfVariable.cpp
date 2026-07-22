#include <iostream>
using namespace std;
int fun(int x, int y)
{
  cout << "Main x: " << &x << endl;
  cout << "Main y: " << &y << endl;
}
int main()
{
  int a = 3;
  int b = 4;
  cout << "Main a: " << &a << endl;
  cout << "Main b: " << &b << endl;
  fun(a, b);
  return 0;
}