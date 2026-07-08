#include <iostream>
using namespace std;
int main()
{
  float radius, height, pi = 3.14;
  cout << "Enter the radius and height: ";
  cin >> radius >> height;

  float volume = pi * radius * radius * height;
  cout << volume;
}