#include <iostream>
using namespace std;

int main()
{
    int N, M;
    cout << "Informe o número de linhas: ";
    cin >> N;
    cout << "Informe o número de colunas: ";
    cin >> M;

    int **matriz = new int *[N];
    for (int i = 0; i < N; i++)
    {
        matriz[i] = new int[M];
    }

    cout << "Informe os elementos da matriz:" << endl;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> matriz[i][j];
        }
    }

    int maior = matriz[0][0], colMaior = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (matriz[i][j] > maior)
            {
                maior = matriz[i][j];
                colMaior = j;
            }
        }
    }

    int somaColuna = 0;
    for (int i = 0; i < N; i++)
    {
        somaColuna += matriz[i][colMaior];
    }

    cout << "Soma = " << somaColuna << endl;

    for (int i = 0; i < N; i++)
    {
        delete[] matriz[i];
    }
    delete[] matriz;

    cout << "--------------" << endl;

    return 0;
}
