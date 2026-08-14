#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter size of character array: ";
    cin >> n;

    char *arr = new char[n];

    cout << "Enter " << n << " characters:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int vowels = 0, consonants = 0;
    int digits = 0, spaces = 0;

    for (int i = 0; i < n; i++)
    {
        char ch = arr[i];

        if (ch == ' ')
        {
            spaces++;
        }
        else if (ch >= '0' && ch <= '9')
        {
            digits++;
        }
        else if ((ch >= 'A' && ch <= 'Z') ||
                 (ch >= 'a' && ch <= 'z'))
        {
            if (ch == 'A' || ch == 'E' || ch == 'I' ||
                ch == 'O' || ch == 'U' ||
                ch == 'a' || ch == 'e' || ch == 'i' ||
                ch == 'o' || ch == 'u')
            {
                vowels++;
            }
            else
            {
                consonants++;
            }
        }
    }

    cout << "\nVowels      = " << vowels;
    cout << "\nConsonants  = " << consonants;
    cout << "\nDigits      = " << digits;
    cout << "\nSpaces      = " << spaces << endl;

    delete[] arr;

    return 0;
}