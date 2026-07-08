#include <iostream>
using namespace std;

int main()
{
  int num;
  cin >> num;
  if (num % 5 == 0)
  {
    cout << num << " is divisible by 5" << endl;
  }
  else
  {
    cout << num << " is not divisible by 5" << endl;
  }

  // cout << "This is a shortcut " << (num % 5 == 0) << " means true";
}