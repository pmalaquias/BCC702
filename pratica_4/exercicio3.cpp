/*
3. Faça um programa que contém uma função que recebe como parâmetro um valor inteiro e positivo N, indicando a quantidade de parcelas de uma soma S.
O valor de S deve ser calculado pela fórmula:
S = 2/4 + 6/5 + 12/6 + ... + n*(n+1)/(n+3)
A leitura de N e a impressão de S devem ser feitas na função main

Exemplo 1:
Digite o número de parcelas da soma: 1
A soma das parcelas: 0.5

Exemplo 2:
Digite o número de parcelas da soma: 3
A soma das parcelas: 3.7

Obs.: Quando o operador de divisão (/) é usado com números inteiros, o resultado é um número inteiro (ex.: 5/2 = 2).
Para o operador retornar um número real, pode-se converter o numerador para real (ex.: ((float) 5)/2 = 2.5).
*/

#include <iostream>

using namespace std;

float calculateSum(int n);

int main()
{
    int n;

    cout << "Digite o número de parcelas da soma: ";
    cin >> n;

    cout << "A soma das parcelas: " << calculateSum(n) << endl;

    cout << "---------------------------------" << endl;

    return 0;
}

float calculateSum(int n)
{
    float sum = 0.0;

    for (int i = 1; i <= n; i++)
    {
        sum += i * (i + 1.0) / (i + 3.0);
    }

    return sum;
}