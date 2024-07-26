/*
    4. Faça uma função que retorna a razão entre dois números inteiros. A função deve retornar pelo comando return o valor 1 se a operação foi possível e o valor 0 se a operação não foi possível (divisão por zero, por exemplo). O resultado da divisão deve ser retornado por um parâmetro por referência.
    Na função main, os valores de entrada devem ser lidos. Se o retorno da função chamada for 1, imprimir o valor da razão. Se o retorno for 0, imprimir ERRO

    Exemplo 1:
    Digite um número inteiro: 11
    Digite um número inteiro: 2
    Razão: 5

    Exemplo 2:
    Digite um número inteiro: 23
    Digite um número inteiro: 0
    ERRO
*/

#include <iostream>

using namespace std;

int calculateRatio(int a, int b, float &ratio);

int main()
{
    int a, b;
    float ratio;

    cout << "Digite um número inteiro: ";
    cin >> a;

    cout << "Digite um número inteiro: ";
    cin >> b;

    if (calculateRatio(a, b, ratio))
    {
        cout << "Razão: " << ratio << endl;
    }
    else
    {
        cout << "ERRO" << endl;
    }

    cout << "---------------------------------" << endl;

    return 0;
}

int calculateRatio(int a, int b, float &ratio)
{
    if (b == 0)
    {
        return 0;
    }

    ratio = (float)a / b;

    return 1;
}