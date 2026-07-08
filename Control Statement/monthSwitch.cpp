#include <iostream>
using namespace std;

int main()
{
  int x;
  cout << "Enter the month number: ";
  cin >> x;
  // 1 3 5 7 8 10 12 -> 31
  // 2 -> 28
  // 4 6 9 11 -> 30;
  switch ((x == 4 || x == 6) || (x == 9 || x == 11))
  {
  case 1:
    cout << "30 Days";
    break;
  }
  switch (x == 2)
  {
  case 1:
    cout << "28 Days";
    break;
  }
  switch ((x <= 7 && x % 2 != 0) || ((x >= 8 && x <= 12) && x % 2 == 0))
  {
  case 1:
    cout << "31 Days";
    break;
  }

  /*
  switch (x)
  {
  case 1:
    cout << "January - 31 Days";
    break;
  case 2:
    cout << "February - 28 Days";
    break;
  case 3:
    cout << "March - 31 Days";
    break;
  case 4:
    cout << "April - 30 Days";
    break;
  case 5:
    cout << "May - 31 Days";
    break;
  case 6:
    cout << "June - 30 Days";
    break;
  case 7:
    cout << "July - 31 Days";
    break;
  case 8:
    cout << "August - 31 Days";
    break;
  case 9:
    cout << "September - 30 Days";
    break;
  case 10:
    cout << "october - 31 Days";
    break;
  case 11:
    cout << "November - 30 Days";
    break;
  case 12:
    cout << "December - 31 Days";
    break;
  default:
    cout << "invalid number";
  }
*/
}