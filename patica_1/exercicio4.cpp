#include <iostream>
using namespace std;

int main()
{
    int A, B;

    // Leitura dos valores
    cout << "Digite o valor para A: ";
    cin >> A;
    cout << "Digite o valor para B: ";
    cin >> B;

    // Troca dos valores
    int temp = A;
    A = B;
    B = temp;

    // Apresentação dos valores trocados
    cout << "Valores trocados na memoria:" << endl;
    cout << "A: " << A << endl;
    cout << "B: " << B << endl;

    return 0;
}
