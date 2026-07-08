#include <iostream>
using namespace std;

int main()
{
    bool isPrime = true;
    int number;
    cout << "Enter the number: ";
    cin >> number;

    if (number <= 1)
    {
        cout << "Not a Prime or Consonant";
    }
    else
    {
        for (int i = 2; i < number; i++)
        {
            if (number % i == 0)
            {
                cout << number << " is a consonant";
                isPrime = false;
                break;
            }
        }

        if (isPrime)
        {
            cout << number << " is a prime";
        }
    }
    return 0;
}