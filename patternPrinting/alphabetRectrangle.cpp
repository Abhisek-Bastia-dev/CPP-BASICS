#include <iostream>
using namespace std;

int main()
{
  int r;
  cout << "Enter the row and column: ";
  cin >> r;

  for (int i = 1; i <= r; i++)
  {
    int ascii = 65;
    for (int j = 1; j <= r; j++)
    {
      // cout << (char)(j + 64) << " ";   //one line answer.
      cout << (char)ascii << " ";
      ascii += 1;
    }
    cout << endl;
  }
}