#include <iostream>
using namespace std;

int main()
{
  float p, r, t, si;
  cout << "Enter value of p: ";
  cin >> p;
  cout << endl
       << "Enter value of r: ";
  cin >> r;
  cout << endl
       << "Enter the value of t: ";
  cin >> t;
  si = (p * r * t) / 100;
  cout << endl
       << "The Simple Interest is " << si << ".";
  return 0;
}