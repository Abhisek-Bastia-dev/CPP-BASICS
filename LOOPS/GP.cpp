#include <iostream>
using namespace std;

int main()
{
  int a = 1, n;
  cout << "Enter:";
  cin >> n;

  for (int i = 1; i <= n; i++)
  {
    cout << a << endl;
    a = a * 2;
  }
  return 0;
}