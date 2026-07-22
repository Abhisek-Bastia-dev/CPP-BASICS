#include <iostream>
using namespace std;
int a = 99; // global
int main()
{
    bool x = 2; // local
    int a = 46; // variable shadowing
    cout << a << endl;
    cout << x << endl;
    while (x)
    {
        int y = 6; // block scope
        cout << y << endl;
        x = false;
    }
    return 0;
}