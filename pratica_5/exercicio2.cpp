/*
    Exercicio 2: Crie um registro chamado funcionario que contenha os seguintes campos:
        - nome (string): Nome do funcionário.
        - id (int): ID do funcionário.
        - cargo (string): Cargo do funcionário.
        - salario (float): Salário do funcionário.
    No programa principal, declare um vetor de funcionario para armazenar informações de até N funcionários, onde o valor de N é lido. Solicite ao usuário os dados de cada funcionário e preencha os campos do registro.
    O programa deve calcular e exibir o salário médio dos funcionários e o nome e o cargo do funcionário com maior salário.

*/

#include <iostream>
#include <string>

using namespace std;

struct Funcionario
{
    string nome;
    int id;
    string cargo;
    float salario;
};

int main()
{
    int N;
    cout << "Digite a quantidade de funcionarios: ";
    cin >> N;
    cin.ignore(); // Para limpar o buffer do newline

    Funcionario *funcionarios = new Funcionario[N];

    for (int i = 0; i < N; i++)
    {
        cout << "Digite o nome do funcionário: ";
        getline(cin, funcionarios[i].nome);
        cout << "Digite o ID do funcionário: ";
        cin >> funcionarios[i].id;
        cin.ignore(); // Para limpar o buffer do newline
        cout << "Digite o cargo do funcionário: ";
        getline(cin, funcionarios[i].cargo);
        cout << "Digite o salário do funcionário: ";
        cin >> funcionarios[i].salario;
        cin.ignore();
    }

    float somaSalarios = 0;
    int indexMaiorSalario = 0;
    for (int i = 0; i < N; i++)
    {
        somaSalarios += funcionarios[i].salario;
        if (funcionarios[i].salario > funcionarios[indexMaiorSalario].salario)
        {
            indexMaiorSalario = i;
        }
    }

    float salarioMedio = somaSalarios / N;

    cout << "Salário Médio dos Funcionários: " << salarioMedio << endl;
    cout << "Maior salário: " << funcionarios[indexMaiorSalario].nome
         << ", " << funcionarios[indexMaiorSalario].cargo << endl;

    delete[] funcionarios;

    cout << "----------------------------------------" << endl;

    return 0;
}