#include <iostream>
using namespace std;

int main()
{
  // 100, 97, 94, 91... nth term positive
  /*
  int a = 100;
  for (int i = 1; i <= 34; i++)
  {
    cout << a << endl;
    a = a - 3;
  }
    */

  /*
int a = 100;
for (int i = 1; a > 0; i++)
{
  cout << a << endl;
  a = a - 3;
}
  */

  /*
  int a = 100;
  for (; a > 0;)
  {
    cout << a << endl;
    a = a - 3;
  }
*/

  /*
    for (int a = 100; a > 0; a = a - 3)
    {
      cout << a << endl;
    }
      */

  for (int i = 100; i > 0; i = i - 3)
  {
    cout << i << endl;
  }
  return 0;
}