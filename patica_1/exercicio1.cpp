#include <iostream>
using namespace std;

int main()
{

    float num_1, num_2, num_3, media;

    cout << "Primeiro número real: ";
    cin >> num_1;

    cout << "Segundo número real: ";
    cin >> num_2;

    cout << "Terceiro número real: ";
    cin >> num_3;

    media = (num_1 + num_2 + num_3) / 3;

    cout << "Média aritmética: " << media << endl;

    return 0;
}