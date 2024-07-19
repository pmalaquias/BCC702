#include <iostream>
#include <string>
using namespace std;

int main()
{
    string palavra;
    cout << "Digite uma palavra: ";
    cin >> palavra;

    bool isPalindromo = true;
    int len = palavra.length();
    for (int i = 0; i < len / 2; i++)
    {
        if (palavra[i] != palavra[len - i - 1])
        {
            isPalindromo = false;
            break;
        }
    }

    if (isPalindromo)
    {
        cout << palavra << " é palíndromo" << endl;
    }
    else
    {
        cout << palavra << " não é palíndromo" << endl;
    }

    cout << "--------------" << endl;

    return 0;
}
