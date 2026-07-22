#include <iostream>
using namespace std;
long long factorial(int n)
{
  long long fact = 1;
  for (int i = 2; i <= n; i++)
  {
    fact = fact * i;
  }
  return fact;
}

long long combination(long long i, long long j)
{
  // i row j column

  long long icj = factorial(i) / (factorial(j) * (factorial(i - j)));
  return icj;
}

int main()
{
  int n;
  cout << "Enter the row number: ";
  cin >> n;
  for (int i = 0; i <= n; i++)
  {
    for (int j = 0; j <= i; j++)
    {
      cout << combination(i, j) << " ";
    }
    cout << endl;
  }

  return 0;
}