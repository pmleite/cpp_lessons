#include <iostream>
using namespace std;

struct Aluno{
    string nome;
    int idade;
    int anoEscolar;
    float nota;
};

int main(){
    const int MAXIMO = 20;
    Aluno aluno[MAXIMO];
    int numAluno;

    cout << "quantos alunos? (max:" << MAXIMO << "):" << endl;
    cin >> numAluno;
    if(numAluno > MAXIMO) numAluno = MAXIMO;

    for(int i = 0; i < numAluno; i++){
        cout << "Dados para o aluno " << i + 1 << endl;
        cout << "nome: ";
        cin >> aluno[i].nome;
        cout << "idade: ";
        cin >> aluno[i].idade;
        cout << "ano da escola: ";
        cin >> aluno[i].anoEscolar;
        cout << "nota final: ";
        cin >> aluno[i].nota;
    }

    float soma = 0;
    for(int i = 0; i < numAluno; i++){
        soma += aluno[i].nota;
    }

    cout << "media: " << (soma / numAluno) << endl;

    for(int i = 0; i < numAluno; i++){
        cout << "nome: " << aluno[i].nome << endl;
        cout << "idade: " << aluno[i].idade << endl;
        cout << "ano da escola: " << aluno[i].anoEscolar << endl;
        cout << "nota final: " << aluno[i].nota << endl;
    }




}