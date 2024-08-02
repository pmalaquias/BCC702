/*
    exercicio 3:Faça um programa que use o método de busca binária para encontrar e imprimir a posição de um determinado elemento no vetor. Se o elemento não existir, seu programa deve imprimir o valor -1.
 Assuma que o vetor de entrada está ordenado
*/

#include <iostream>

using namespace std;

int binarySearch(int arr[], int l, int r, int x);

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

    int x;
    cout << "Digite o elemento a ser buscado: ";
    cin >> x;

    int result = binarySearch(arr, 0, n - 1, x);

    if (result == -1)
    {
        cout << "Elemento não encontrado" << endl;
    }
    else
    {
        cout << "Elemento encontrado na posição " << result << endl;
    }

    return 0;
}

int binarySearch(int arr[], int l, int r, int x)
{
    if (r >= l)
    {
        int mid = l + (r - l) / 2;

        if (arr[mid] == x)
            return mid;

        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);

        return binarySearch(arr, mid + 1, r, x);
    }

    return -1;
}