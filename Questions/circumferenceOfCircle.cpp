#include <iostream>
using namespace std;

int main()
{
  // 2 pi r
  double pi = 3.14, r;
  cout << "Enter the value of radius: ";
  cin >> r;
  double circumference = 2 * pi * r;
  cout << circumference << " Circumference of a Circle where radius is " << r;
  return 0;
}