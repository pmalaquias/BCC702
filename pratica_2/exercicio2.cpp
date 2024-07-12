#include <iostream>

using namespace std;

int main() {
    int codigo;
    cout << "Digite o código de origem do produto: ";
    cin >> codigo;

    if (codigo == 1) {
        cout << "Procedência: Amazonas" << endl;
    } else if (codigo == 2) {
        cout << "Procedência: Pará" << endl;
    } else if (codigo == 3 || codigo == 4) {
        cout << "Procedência: Pernambuco" << endl;
    } else if (codigo == 5 || codigo == 6) {
        cout << "Procedência: Bahia" << endl;
    } else if (codigo >= 7 && codigo <= 10) {
        cout << "Procedência: Belo Horizonte" << endl;
    } else if (codigo >= 11 && codigo <= 20) {
        cout << "Procedência: São Paulo" << endl;
    } else {
        cout << "Código inválido!" << endl;
    }

    cout << endl;

    return 0;
}
