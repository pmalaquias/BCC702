#include <iostream>
using namespace std;

int main()
{
    const int N = 8;
    int numeros[N], positivos[N], negativos[N];
    int posCount = 0, negCount = 0;

    cout << "Digite 8 números inteiros: ";
    for (int i = 0; i < N; i++)
    {
        cin >> numeros[i];
        if (numeros[i] >= 0)
        {
            positivos[posCount++] = numeros[i];
        }
        else
        {
            negativos[negCount++] = numeros[i];
        }
    }

    cout << "Positivos: ";
    for (int i = 0; i < posCount; i++)
    {
        cout << positivos[i] << " ";
    }
    cout << endl;

    cout << "Negativos: ";
    for (int i = 0; i < negCount; i++)
    {
        cout << negativos[i] << " ";
    }
    cout << endl;

    cout << "------------" << endl;

    return 0;
}
