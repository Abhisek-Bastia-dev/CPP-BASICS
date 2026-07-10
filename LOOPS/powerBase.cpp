#include <iostream>
using namespace std;

int main()
{
  int base, power;
  float result = 1;
  cout << "Base : " << "Power: ";
  cin >> base >> power;
  bool positivePower = true; // positive power

  if (base == 0 && power == 0)
  {
    cout << "Not valid";
    return 0;
  }

  if (base == 0 && power < 0)
  {
    cout << "Undefined";
    return 0;
  }

  if (power < 0)
  {
    power = -power;
    positivePower = false; // negative power
  }

  for (int i = 1; i <= power; i++)
  {
    result *= power;
  }

  if (!positivePower)
  {
    result = 1 / result;
    power = -power;
  }
  cout << "Base = " << base << " Power = " << power << " Answer = " << result;
  return 0;
}