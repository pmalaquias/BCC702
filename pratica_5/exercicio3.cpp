/*
    exercicio 3: Faça um programa que crie um arquivo com o nome “dados.txt”, e escreva neste arquivo uma contagem que vá de 1 até 100, com um número em cada linha.
    Obs: Verifique na mesma pasta que o código foi salvo, se aparece o arquivo “dados.txt”. Abra-o e veja se aparecem os números salvos.
*/

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream arquivo("dados.txt");

    if (arquivo.is_open())
    {
        for (int i = 1; i <= 100; i++)
        {
            arquivo << i << endl;
        }
        cout << "Arquivo criado com sucesso" << endl;
    }
    else
    {
        cout << "Erro ao abrir o arquivo" << endl;
    }

    arquivo.close();

    return 0;
}