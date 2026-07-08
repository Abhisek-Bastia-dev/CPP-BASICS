#include <iostream>
using namespace std;

int main()
{
  long long fact = 1;
  int n;
  cout << "Enter the number: ";
  cin >> n;
  if (n == 0 || n == 1)
  {
    cout << "factorial is " << fact;
  }
  else
  {
    while (n > 1)
    {
      fact *= n;
      n--;
    }
    cout << "factorial is " << fact;
  }
  return 0;
}