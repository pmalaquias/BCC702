#include <iostream>

using namespace std;

int main() {
    double notaLab, notaSem, notaFinal;
    cout << "Digite a nota do trabalho de laboratório: ";
    cin >> notaLab;
    cout << "Digite a nota da avaliação semestral: ";
    cin >> notaSem;
    cout << "Digite a nota do exame final: ";
    cin >> notaFinal;

    double mediaPonderada = (notaLab * 2 + notaSem * 3 + notaFinal * 5) / 10;

    cout << "Média ponderada: " << mediaPonderada << endl;
    if (mediaPonderada >= 8.0) {
        cout << "Conceito: A" << endl;
    } else if (mediaPonderada >= 7.0) {
        cout << "Conceito: B" << endl;
    } else if (mediaPonderada >= 6.0) {
        cout << "Conceito: C" << endl;
    } else if (mediaPonderada >= 5.0) {
        cout << "Conceito: D" << endl;
    } else {
        cout << "Conceito: E" << endl;
    }

    cout << endl;

    return 0;
}
