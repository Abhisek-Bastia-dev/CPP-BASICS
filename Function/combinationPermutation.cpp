#include <iostream>
using namespace std;
long long factorial(int n)
{
  long long fact = 1;
  if (n == 0 || n == 1)
  {
    return fact;
  }
  else
  {
    for (int i = 2; i <= n; i++)
    {
      fact = fact * i;
    }
    return fact;
  }
}
long long combination(int n, int r)
{
  long long nFact = factorial(n);
  long long rFact = factorial(r);
  long long diffFact = factorial(n - r);
  long long ncr = nFact / (rFact * diffFact);

  return ncr;
}
long long permutation(int n, int r)
{
  long long nFact = factorial(n);
  long long diffFact = factorial(n - r);
  long long npr = nFact / diffFact;
  return npr;
}
int main()
{
  int n, r;

  cout << "Enter n: ";
  cin >> n;

  cout << "Enter r: ";
  cin >> r;
  cout << factorial(3) << endl;
  cout << combination(6, 3) << endl;
  cout << permutation(6, 3);
  return 0;
}