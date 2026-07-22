#include <iostream>
using namespace std;
int hcf(int a, int b)
{
  int hcf = 1;
  for (int i = 1; i <= min(a, b); i++)
  {
    if (a % i == 0 && b % i == 0)
    {
      hcf = i;
    }
  }
  cout << hcf << endl;
}
int hcfOptimized(int a, int b)
{
  int hcf;
  for (int i = min(a, b); i >= 1; i--)
  {
    if (a % i == 0 && b % i == 0)
    {
      hcf = i;
      break;
    }
  }
  cout << hcf << endl;
}
int main()
{
  int a, b;
  cout << "Enter two numbers: ";
  cin >> a >> b;
  hcfOptimized(a, b);
  return 0;
}