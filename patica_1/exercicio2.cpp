#include <iostream>
using namespace std;

int main()
{

    int valor;
    cout << "Digite o valor em reais: ";
    cin >> valor;

    int notas50 = valor / 50;
    valor %= 50;

    int notas10 = valor / 10;
    valor %= 10;

    int notas5 = valor / 5;
    valor %= 5;

    int notas1 = valor;

    cout << "Quantidade de notas:" << endl;
    cout << "Notas de R$50: " << notas50 << endl;
    cout << "Notas de R$10: " << notas10 << endl;
    cout << "Notas de R$5: " << notas5 << endl;
    cout << "Notas de R$1: " << notas1 << endl;

    return 0;
}