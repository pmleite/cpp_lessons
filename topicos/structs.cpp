#include <iostream>

using namespace std;

struct Aluno{
    string nome;
    int idade;
    string turma;
};


int main(){

    Aluno xtp5676 = {"Joao", 15, "A"};

    cout << "Nome: " << xtp5676.nome << endl;
    cout << "Idade: " << xtp5676.idade << endl;
    cout << "Turma: " << xtp5676.turma << endl;
    

    return 0;
}