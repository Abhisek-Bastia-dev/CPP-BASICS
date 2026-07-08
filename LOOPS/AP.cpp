#include <iostream>
using namespace std;

int main()
{
  /*
  // AP  fist number a , diff d
  // a n = a + (n-1)d  <-formula
  int n;
  cin >> n;
  for (int i = 1; i <= 2 * n - 1; i += 2)
  {
    cout << i << endl;
  }
  */

  // second variable
  int a = 1;
  int n;
  cout << "Enter: ";
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    cout << a << endl;
    a += 2;
  }
  return 0;
}