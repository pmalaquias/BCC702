/*
    1. Escreva um programa com uma função chamada media, que recebe dois números reais e retorna sua média.
    Na função main, faça a entrada e saída de dados e a chamada da função media
*/

#include <iostream>

using namespace std;

float media(float a, float b);

int main()
{

    float a, b;

    cout << "Digite um número real: ";
    cin >> a;

    cout << "Digite outro número real: ";
    cin >> b;

    cout << "Média: " << media(a, b) << endl;

    cout << "---------------------------------" << endl;

    return 0;
}

float media(float a, float b)
{
    return (a + b) / 2;
}