/*
    exercicio4.cpp:Altere o método de busca binária para que, a cada divisão do vetor, ele imprima quantos elementos foram descartados na busca.
    Assuma que o vetor de entrada está ordenado

    ex1: Digite a quantidade de elementos do vetor: 5
    Digite os elementos do vetor: 1 2 3 4 5
    Digite o elemento procurado: 1
    1ª iteração: 3

    ex2: Digite a quantidade de elementos do vetor: 8
    Digite os elementos do vetor: 1 3 6 9 12 22 25 30
    Digite o elemento procurado: 25
    1ª iteração: 4
    2ª iteração: 2
    3ª iteração: 1
*/
#include <iostream>

using namespace std;

int binarySearch(int arr[], int l, int r, int x, int &count);

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

    int count = 0;
    int result = binarySearch(arr, 0, n - 1, x, count);

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

int binarySearch(int arr[], int l, int r, int x, int &count)
{
    if (r >= l)
    {
        int mid = l + (r - l) / 2;

        if (arr[mid] == x)
            return mid;

        if (arr[mid] > x)
        {
            count++;
            cout << count << "ª iteração: " << r - mid + 1 << endl;
            return binarySearch(arr, l, mid - 1, x, count);
        }

        count++;
        cout << count << "ª iteração: " << mid - l + 1 << endl;
        return binarySearch(arr, mid + 1, r, x, count);
    }

    return -1;
}