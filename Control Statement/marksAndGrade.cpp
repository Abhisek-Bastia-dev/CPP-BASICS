#include <iostream>
using namespace std;

int main()
{
  int mark;
  cout << "Enter your mark: ";
  cin >> mark;
  if (mark > 90 && mark <= 100)
  {
    cout << "Excellent";
  }
  else if (mark > 80 && mark <= 90)
  {
    cout << "Very Good";
  }
  else if (mark > 70 && mark <= 80)
  {
    cout << "Good";
  }
  else if (mark > 60 && mark <= 70)
  {
    cout << "Can do better";
  }
  else if (mark > 50 && mark <= 60)
  {
    cout << "Average";
  }
  else if (mark >= 40 && mark <= 50)
  {
    cout << "Below Average";
  }
  else if (mark < 40)
  {
    cout << "Fail";
  }
}