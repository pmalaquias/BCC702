#include <iostream>

using namespace std;

int main()
{
    int nun_elem;
    cout << "Digite o numero de elementos: ";
    cin >> nun_elem;

    int possicao_menor = 0;
    int primeira_pos;

    int vetor[nun_elem];
    int menor = vetor[0];
    cout << "Informe os elementos: ";
    for (int i = 0; i < nun_elem; i++)
    {

        if (vetor[i] < menor)
        {
            menor = vetor[i];
            possicao_menor = i;
        }

        cin >> vetor[i];
    }

    primeira_pos = vetor[0];
    vetor[0] = menor;
    vetor[possicao_menor] = primeira_pos;

    cout << "Menor: " << menor << " na possicao " << possicao_menor << endl;

    cout << "Vator resultante: ";
    for (int i = 0; i < nun_elem; i++)
    {

        cout << vetor[i] << " ";
    }

    cout << "------------" << endl;

    return 0;
}