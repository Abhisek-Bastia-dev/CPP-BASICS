#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter a odd number: ";
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    int value;
    if (i % 2 == 0)
    {
      value = 0;
    }
    else
    {
      value = 1;
    }
    for (int j = 1; j <= i; j++)
    {
      cout << value << " ";
      value = 1 - value;
    }
    cout << endl;
  }
  return 0;
}