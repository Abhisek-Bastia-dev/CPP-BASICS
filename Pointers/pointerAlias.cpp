#include <iostream>
using namespace std;
int swap(int &a, int &b)
{
  cout << a << " " << b << endl;
  int temp = a;
  a = b;
  b = temp;
  cout << a << " " << b << endl;
}
int main()
{
  // using temp variable
  int a = 3, b = 4, temp;
  cout << a << " " << b << endl;
  temp = a;
  a = b;
  b = temp;
  cout << a << " " << b << endl;
  cout << endl;
  // without using temp
  int x = 6, y = 8;
  cout << x << " " << y << endl;
  x = x + y;
  y = x - y;
  x = x - y;
  cout << x << " " << y << endl;
  cout << endl;
  swap(a, b);
  cout << endl;
  cout << a << " " << b << endl;
  return 0;
}