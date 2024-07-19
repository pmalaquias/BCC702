#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num_elem;
    cout << "Digite o número de elementos: ";
    cin >> num_elem;

    int maior = -1000, menor = 1000;
    double media = 0;
    int soma = 0;

    cout << "Informe os elementos: ";

    for (int i = 0; i < num_elem; i++)
    {
        int elem;
        cin >> elem;

        if (elem > maior)
        {
            maior = elem;
        }

        if (elem < menor)
        {
            menor = elem;
        }

        soma += elem;
    }

    media = (double)soma / num_elem;

    cout << "Soma: " << soma << endl;
    cout << "Maior: " << maior << endl;
    cout << "Menor: " << menor << endl;
    cout << "Média: " << media << endl;
    cout << "----------------" << endl;

    return 0;
}