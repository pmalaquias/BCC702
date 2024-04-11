#include <iostream>
using namespace std;

int main()
{
    int numeroPlaca;
    cout << "Digite o número da placa do veiculo (4 dígitos): ";
    cin >> numeroPlaca;

    // Obtém o dígito das centenas
    int digitoCentenas = (numeroPlaca / 100) % 10;

    cout << "O dígito da(s) centena(s) é: " << digitoCentenas << endl;

    return 0;
}
