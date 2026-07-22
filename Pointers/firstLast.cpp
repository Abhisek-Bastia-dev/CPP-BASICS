#include <iostream>
using namespace std;
int firstAndLast(int n, int *ptr1, int *ptr2)
{
  *ptr1 = n % 10;
  while (n > 9)
  {
    n = n / 10;
  }
  *ptr2 = n;
}
int main()
{
  int n, firstDigit, lastDigit;
  int *ptr1 = &firstDigit, *ptr2 = &lastDigit;
  cout << "Enter number: ";
  cin >> n;
  firstAndLast(n, ptr1, ptr2);
  cout << "first digit: " << *ptr1 << " " << "Last Digit: " << *ptr2;
  return 0;
}