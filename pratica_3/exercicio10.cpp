#include <iostream>
#include <string>

using namespace std;

int main()
{
    string frase;
    char letra;
    cout << "Digite uma frase: ";
    cin.ignore();        // Ignorar o caractere de nova linha pendente no buffer
    getline(cin, frase); // Ler a frase inteira
    cout << "Digite uma letra: ";
    cin >> letra;

    int contador_letra = 0, contador_validos = 0;
    for (char c : frase)
    {
        if (c != ' ')
        {
            contador_validos++;
            if (c == letra)
            {
                contador_letra++;
            }
        }
    }

    double cont = contador_letra * 1.0;

    double percentual = 0;
    if (contador_validos > 0)
    {
        percentual = cont / contador_validos * 1.0;
    }

    cout << "Percentual de '" << letra << "' na frase: " << percentual << endl;

    cout << "--------------" << endl;

    return 0;
}
