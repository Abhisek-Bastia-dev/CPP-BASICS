#include <iostream>
using namespace std;

int main()
{
  int a, b, c;
  cout << "Enter three sides value: ";
  cin >> a >> b >> c;
  if (a + b > c)
  {
    cout << "it is valid triangle";
  }
  else if (b + c > a)
  {
    cout << "it is valid triangle";
  }
  else if (a + c > b)
  {
    cout << "it is valid triangle";
  }
  else
  {
    cout << "it is not valid values for sides of triangle";
  }
}