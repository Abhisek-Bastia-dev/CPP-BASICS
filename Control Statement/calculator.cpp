#include <iostream>
using namespace std;

int main()
{

  int a, b;
  char ch;
  cout << "Enter two number and functions: ";
  cin >> a >> ch >> b;

  if (ch == '+')
    cout << (a + b);
  else if (ch == '-')
    cout << (a - b);
  else if (ch == '*')
    cout << (a * b);
  else if (ch == '/')
    cout << (a / b);

  switch (ch)
  {
  case '+':
    cout << a + b;
    break;
  case '-':
    cout << a - b;
    break;
  case '*':
    cout << a * b;
    break;
  case '/':
    cout << a / b;
  }

  /*
    switch (ch == '+')
    {
    case 1:
      cout << a + b;
    }
    switch (ch == '-')
    {
    case 1:
      cout << a - b;
    }
    switch (ch == '*')
    {
    case 1:
      cout << a * b;
    }
    switch (ch == '/')
    {
    case 1:
      cout << a / b;
    }
      */
}