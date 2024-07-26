/*
    exercicio 5:Faça um programa que lê os dados de Aluno (nome, nota1 e nota2) salvos no arquivo “alunos.txt” e imprime na tela o nome do aluno com maior média.
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
    ifstream arquivo;
    arquivo.open("alunos.txt");
    Aluno aluno;
    Aluno alunoMaiorMedia;
    float maiorMedia = 0;
    if (arquivo.is_open())
    {
        while (!arquivo.eof())
        {
            arquivo >> aluno.nome >> aluno.nota1 >> aluno.nota2;
            if (arquivo.eof())
            {
                break;
            }
            float media = (aluno.nota1 + aluno.nota2) / 2;
            if (media > maiorMedia)
            {
                maiorMedia = media;
                alunoMaiorMedia = aluno;
            }
        }
        cout << "Aluno com maior media: " << alunoMaiorMedia.nome << endl;
    }
    else
    {
        cout << "Erro ao abrir o arquivo" << endl;
    }

    arquivo.close();

    cout << "---------------------------------" << endl;

    return 0;
}