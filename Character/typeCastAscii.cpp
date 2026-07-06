#include <iostream>
using namespace std;

int main()
{
  char ch = '6';

  cout << ch + 100 << endl; // auto typecast -> 54 + 1

  int y = ch;
  cout << y << endl; // auto typecast

  bool x = true;
  cout << x + 10 << endl; // auto typecast -> 1 + 10

  // Manual typecast

  char _ch = '#';
  cout << (int)ch << endl;

  int a = 10;
  int b = 3;
  double c = (double)a / b;
  cout << c << endl;

  bool d = false;
  cout << (int)d + 10 << endl;

  // Get letter and numbers as the order number not ASCII values
  char ch2;

  cout << "Enter a uppercase letter only: ";
  cin >> ch2; // auto
  // int p = (int)ch2; // manual
  // cout << p - 64;
  cout << ch2 - 'A' + 1; // short cut
}