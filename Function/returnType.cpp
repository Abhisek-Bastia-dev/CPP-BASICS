#include <iostream>
#include <vector>
using namespace std;
// Return a Number
int sum(int a, int b)
{
  return a + b;
}

float subtract(float a, float b)
{
  return a - b;
}
// Return a String
#include <string>

string greet()
{
  return "Good Morning";
}

// Return Boolean
bool isAdult(int age)
{
  return age >= 18;
}

// Return an Array / Collection
vector<int> numbers()
{
  return {10, 20, 30};
}

int main()
{

  cout << sum(2, 2) << endl;
  cout << subtract(65.5, 'A') << endl; // 65.5 - ascii value of A
  cout << endl
       << greet();
  cout << endl
       << isAdult(20);
  return 0;
}