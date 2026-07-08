#include <iostream>
using namespace std;

int main()
{
  int n, count = 0;

  cout << "Enter: ";
  cin >> n;
  if (n == 0)
  {
    count++;
    cout << count;
  }
  else
  {
    while (n != 0)
    {
      n = n / 10;
      count++;
    }
    cout << count;
  }

  return 0;
}