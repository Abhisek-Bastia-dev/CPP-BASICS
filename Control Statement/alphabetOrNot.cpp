#include <iostream>
using namespace std;

int main()
{
  char ch;
  cout << "Enter a character: ";
  cin >> ch;
  // 65 - 91, 97 - 123

  if (((int)ch >= 65 && (int)ch <= 90) || ((int)ch >= 97 && (int)ch <= 122))
  {
    cout << ch << " is a letter" << endl;
    cout << (int)'z';
  }
}