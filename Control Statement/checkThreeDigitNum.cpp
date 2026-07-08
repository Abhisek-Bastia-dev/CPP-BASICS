#include <iostream>
using namespace std;

int main()
{
  int num;
  cin >> num;
  if (num > 100 && num < 999)
  {
    cout << num << " it is a three digit num";
  }
  else
  {
    cout << num << " it is not a three digit num";
  }
}