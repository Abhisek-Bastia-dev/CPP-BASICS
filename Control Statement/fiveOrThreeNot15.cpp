#include <iostream>
using namespace std;

int main()
{
  int num;
  cin >> num;
  if (num % 3 == 0 || num % 5 == 0)
  {
    if (num % 15 != 0)
    {
      cout << num << " is  divisible by 3 or 5";
    }
    else
    {
      cout << "condition not matched";
    }
  }
  else
  {
    cout << "condition not matched";
  }
}