/*
    exercicio1: Altere o algoritmo de ordenação por inserção para ordenar um conjunto de números inteiros em ordem decrescente.
    entrada: 5 3 12 8 2 7
    saída: 12 8 7 5 3 2
*/

#include <iostream>

using namespace std;

void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] < key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }

        arr[j + 1] = key;
    }
}

int main()
{
    int n;
    cout << "Digite o tamanho do vetor: ";
    cin >> n;

    int arr[n];
    cout << "Digite os elementos do vetor: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    insertionSort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}