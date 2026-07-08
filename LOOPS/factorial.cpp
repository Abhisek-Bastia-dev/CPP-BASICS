#include <iostream>
using namespace std;

int main()
{
  long long fact = 1;
  int n;
  cout << "Enter the number: ";
  cin >> n;
  if (n == 0)
  {
    cout << "factorial is " << fact;
  }
  else
  {
    for (int i = 2; i <= n; i++)
    {
      fact *= i;
    }
    cout << "factorial is " << fact;
  }
  return 0;
}