#include <iostream>
using namespace std;
int main()
{
  int a, b;
  int *p = &a;
  int *q = &b;
  cout << "Enter two nums: ";
  cin >> *p >> *q;

  int sum = *p + *q;
  cout << sum;
  return 0;
}