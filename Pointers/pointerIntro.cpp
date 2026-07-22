#include <iostream>
using namespace std;

int main()
{
  int x = 2;
  cout << sizeof(long long) << endl;

  int *p = &x;
  cout << p << endl;
  cout << &x << endl;
  return 0;
}