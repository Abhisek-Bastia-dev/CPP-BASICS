#include <iostream>
using namespace std;

int main()
{
  int x = 3;
  int *ptr = &x;
  int **ptr2 = &ptr;

  cout << &x << endl;
  cout << ptr << endl;
  cout << ptr2 << endl;
  cout << endl;
  cout << x << endl;
  cout << *ptr << endl;
  cout << **ptr2 << endl;
  return 0;
}
