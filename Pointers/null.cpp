#include <iostream>
using namespace std;

int main()
{
  int x;
  int *ptr = NULL;
  int *ptr2 = '\0';
  int *ptr3 = 0;
  int *ptr4 = nullptr;
  cout << ptr << " " << ptr2 << " " << ptr3 << " " << ptr4 << endl;
  if (ptr == nullptr)
    cout << "It is a null pointer";
  return 0;
}