#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter range: ";
    cin >> num;
    int i = 1;
    while (i <= num)
    {
        if (i % 2 == 0)
        {
            i++;
            continue;
        }
        cout << i << endl;
        i++;
    }
    return 0;
}