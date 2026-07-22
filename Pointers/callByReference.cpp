#include <iostream>
using namespace std;
int swap(int *a, int *b)
{
  *a = *a + *b;
  *b = *a - *b;
  *a = *a - *b;
}
int main()
{
  int a, b;
  int *p = &a;
  int *q = &b;
  cout << "Enter: ";
  cin >> *p >> *q;
  swap(p, q);
  cout << *p << " " << *q;
  return 0;
}