#include <iostream>
using namespace std;

int main()
{
  int num;
  cin >> num;
  if (num % 3 == 0)
  {
    if (num % 5 == 0)
    {
      cout << num << " is divisible by 3 and 5 both";
    }
    else
    {
      cout << num << " is divisible by 3 only";
    }
  }
  else
  {
    cout << " condition does not matched";
  }
}