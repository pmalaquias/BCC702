#include <iostream>
using namespace std;

int main()
{
    int n, elemento;
    cout << "Informe o número de elementos: ";
    cin >> n;

    int *elementos = new int[n];
    cout << "Informe os elementos: ";
    for (int i = 0; i < n; i++)
    {
        cin >> elementos[i];
    }

    cout << "Informe o elemento procurado: ";
    cin >> elemento;

    int pos = -1;
    for (int i = 0; i < n; i++)
    {
        if (elementos[i] == elemento)
        {
            pos = i;
            break;
        }
    }

    cout << "Posição do elemento " << elemento << ": " << pos << endl;

    delete[] elementos;

    cout << "------------" << endl;

    return 0;
}
