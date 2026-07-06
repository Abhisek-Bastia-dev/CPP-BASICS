#include <iostream>
using namespace std;

int main()
{
  float pi, radius, area;
  pi = 3.14;
  cout << "Enter the radius: ";
  cin >> radius;
  area = pi * radius * radius;
  cout << "Area of circle is " << area;
  return 0;
}