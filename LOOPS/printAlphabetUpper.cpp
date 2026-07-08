#include <iostream>
using namespace std;

int main()
{
  // A = 65 Z = 90
  for (int ascii = 65; ascii <= 90; ascii++)
  {
    char ch = (char)ascii;
    cout << ch << "\t"
         << ascii << endl;
  }
  return 0;
}