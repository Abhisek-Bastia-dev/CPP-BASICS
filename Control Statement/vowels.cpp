#include <iostream>
using namespace std;

int main()
{
  char alphabet;
  cout << "Enter a character: ";
  cin >> alphabet;
  int ascii = (int)alphabet;

  if ((ascii >= 65 && ascii <= 90) || (ascii >= 97 && ascii <= 123))
  {
    cout << "it is a letter" << endl;

    if (alphabet == 'a' || alphabet == 'e' || alphabet == 'o' || alphabet == 'u' || alphabet == 'i')
    {
      cout << "it is a vowel";
    }
    else if (alphabet == 'A' || alphabet == 'E' || alphabet == 'I' || alphabet == 'O' || alphabet == 'U')
    {
      cout << "it is a vowel";
    }
    else
    {
      cout << "it is a consonant";
    }
  }
  else if (ascii >= 48 && ascii <= 57)
  {
    cout << ascii << "\nit is a digit";
  }
  else
  {
    cout << alphabet << "it is not a letter or digit";
  }
}