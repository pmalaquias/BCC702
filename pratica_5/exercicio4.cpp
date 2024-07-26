/*
    Exercicio 4: Faça um programa com um registro Aluno, contendo nome, nota1, nota2.
    Leia (do teclado) um cadastro de 10 alunos, armazenados em um vetor. Depoisescreva em um arquivo texto chamado “alunos.txt” os dados de cada aluno: nome,nota1 e nota2, separados por espaço.
*/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Aluno
{
    string nome;
    float nota1;
    float nota2;
};

int main()
{
    int n;
    cout << "Digite a quantidade de alunos: ";
    cin >> n;
    cin.ignore();
    Aluno alunos[n];
    ofstream arquivo;
    arquivo.open("alunos.txt");

    if (arquivo.is_open())
    {
        for (int i = 0; i < n; i++)
        {
            cout << "Digite o nome do aluno " << i + 1 << ": ";
            getline(cin, alunos[i].nome);
            cout << "Digite a nota 1 do aluno " << i + 1 << ": ";
            cin >> alunos[i].nota1;
            cout << "Digite a nota 2 do aluno " << i + 1 << ": ";
            cin >> alunos[i].nota2;
            cin.ignore();
            arquivo << alunos[i].nome << " " << alunos[i].nota1 << " " << alunos[i].nota2 << endl;
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