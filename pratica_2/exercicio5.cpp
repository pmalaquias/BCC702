#include <iostream>
using namespace std;

int main() {
    int numero, maior = -1000000, menor = 1000000;
    double soma = 0, count = 0;

    cout << "Digite uma sequência de números inteiros (0 para encerrar):" << endl;
    while (true) {
        cin >> numero;
        if (numero == 0) break;

        if (numero > maior) maior = numero;
        if (numero < menor) menor = numero;

        soma += numero;
        count++;
    }

    if (count > 0) {
        double media = soma / count;
        cout << "Maior: " << maior << endl;
        cout << "Menor: " << menor << endl;
        cout << "Média: " << media << endl;
    } else {
        cout << "Nenhum número foi digitado." << endl;
    }

    return 0;
}
