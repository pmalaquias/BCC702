/*
    Exercicio 1: Crie um registro para representar aluno, contendo os campos nome, média na disciplina e número de faltas.
    No programa principal, leia as informações de N alunos em um vetor. Imprima os nomes dos alunos e sua situação (APROVADO(A) ou REPROVADO(A)), sabendo que, para ser aprovado, o aluno deve ter média maior ou igual a 6,0 número de faltas menor ou igual a 18.
*/

#include <iostream>
#include <string>
using namespace std;

struct Aluno
{
    string nome;
    float media;
    int faltas;
};

int main()
{
    int n;
    cout << "Digite o numero de alunos: ";
    cin >> n;

    Aluno alunos[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Digite o nome do aluno " << i + 1 << ": ";
        cin >> alunos[i].nome;
        cout << "Digite a media do aluno " << i + 1 << ": ";
        cin >> alunos[i].media;
        cout << "Digite o numero de faltas do aluno " << i + 1 << ": ";
        cin >> alunos[i].faltas;
    }

    for (int i = 0; i < n; i++)
    {
        if (alunos[i].media >= 6.0 && alunos[i].faltas <= 18)
        {
            cout << alunos[i].nome << " APROVADO(A)" << endl;
        }
        else
        {
            cout << alunos[i].nome << " REPROVADO(A)" << endl;
        }
    }

    cout << "---------" << endl;

    return 0;
}