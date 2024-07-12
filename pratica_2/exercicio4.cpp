#include <iostream>

using namespace std;

int main() {
    int N;
    cout << "Digite um valor inteiro: ";
    cin >> N;

    int soma = 0;
    for (int i = 1; i <= N; i += 2) {
        soma += i;
    }

    cout << "Soma dos ímpares: " << soma << endl;

    cout << endl;

    return 0;
}
