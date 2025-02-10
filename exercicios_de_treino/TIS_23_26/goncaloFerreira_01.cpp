#include <iostream>

using namespace std;

struct aluno{
    string nome;
    int idade;
    float nota;
};

void adicionar(aluno alunos[], int& alunoo){
    cout << "nome: ";
    cin >> alunos[alunoo].nome;
    cout << "idade: ";
    cin >> alunos[alunoo].idade;
    cout << "nota: ";
    cin >> alunos[alunoo].nota;
    alunoo++;
}

void mostrar(aluno alunos[], int alunoo){

    if(alunoo == 0){
        cout << "não tem nada cadastrado!" << endl;
    }else{
        for(int i=0; i < alunoo; i++){
            cout << "teste";
            cout << "nome: " << alunos[i].nome << endl;
            cout << "idade: " << alunos[i].idade << endl;
            cout << "nota: " << alunos[i].nota << endl;
        }
    }   
}

int main(){
   
    int escolha;
    int alunoo = 0;
    aluno max[20];

    do{
        cout << "1. adicionar alunos" << endl;
        cout << "2. mostrar alunos" << endl;
        cout << "0. sair" << endl;  
        cin >> escolha;

        switch(escolha){
            case 1:
                adicionar(max, alunoo);
                break;
            case 2: 
                mostrar(max, alunoo);
                break;
            case 0:
                cout << "a sair ..." << endl;
                break;
            default:
                cout << "escolha invalida! " << endl;
                break;
        }
    }while (escolha != 0);
    
    
    
}