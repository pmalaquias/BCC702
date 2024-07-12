#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x, y;
    cout << "Digite o valor de X: ";
    cin >> x;
    cout << "Digite o valor de Y: ";
    cin >> y;

    if (x > 0 && y > 0) {
        cout << "Primeiro quadrante: quociente = " << x / y << endl;
    } else if (x < 0 && y > 0) {
        cout << "Segundo quadrante: produto = " << x * y << endl;
    } else if (x < 0 && y < 0) {
        cout << "Terceiro quadrante: soma = " << x + y << endl;
    } else if (x > 0 && y < 0) {
        cout << "Quarto quadrante: x^y = " << pow(x, y) << endl;
    }

    cout << endl;

    return 0;
}
