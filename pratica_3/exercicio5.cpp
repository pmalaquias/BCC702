#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Informe o número de elementos: ";
    cin >> n;

    int *elementos = new int[n];
    cout << "Informe os elementos: ";
    for (int i = 0; i < n; i++)
    {
        cin >> elementos[i];
    }

    int pares = 0, somaImpares = 0;
    for (int i = 0; i < n; i++)
    {
        if (elementos[i] % 2 == 0)
        {
            pares++;
        }
        else
        {
            somaImpares += elementos[i];
        }
    }

    cout << "Quantidade de pares: " << pares << endl;
    cout << "Soma dos ímpares: " << somaImpares << endl;

    delete[] elementos;

    cout << "--------------" << endl;
    return 0;
}
