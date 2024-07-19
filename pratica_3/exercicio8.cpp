#include <iostream>
using namespace std;

int main()
{
    int N;
    cout << "Informe a dimensão da matriz: ";
    cin >> N;

    int **matriz = new int *[N];
    for (int i = 0; i < N; i++)
    {
        matriz[i] = new int[N];
    }

    cout << "Informe os elementos da matriz:" << endl;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> matriz[i][j];
        }
    }

    bool isDiagonal = true;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (i != j && matriz[i][j] != 0)
            {
                isDiagonal = false;
                break;
            }
        }
        if (!isDiagonal)
            break;
    }

    if (isDiagonal)
    {
        cout << "Matriz é diagonal" << endl;
    }
    else
    {
        cout << "Matriz não é diagonal" << endl;
    }

    for (int i = 0; i < N; i++)
    {
        delete[] matriz[i];
    }
    delete[] matriz;

    cout << "--------------" << endl;

    return 0;
}
