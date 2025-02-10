#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int escolha;
int quantidade;

int main(){

    srand(time(0));

    cout<<"Bem vindo a roleta aleatoria"<<endl;
    cout <<"Tem dois tipos de roleta: "<<endl;
    cout <<"1-Nomes"<<endl;
    cout<<"2-Numeros"<<endl;
    cout <<"Agora escolhe o tipo de roleta: ";
    cin>> escolha;

    if(escolha<1 || escolha> 2){
        cout << "Só pode ser 1 ou 2"<<endl;
        return 0;
    }
    
    cout << "Insira a quantidade de elementos a tua roleta vai ter de 2 até 40: ";
    cin>>quantidade;

    if(escolha == 1){
        string nomes[quantidade];
        bool sorteados[quantidade]= {false};

        for(int i = 0; i<quantidade; i++){
            cout<< "Insira o nome " << i+1 <<":";
            cin>>nomes[i];
        }

        for(int i = 0; i<quantidade; i++){
            cout<< "Para sortear o Nome use o Enter"<<endl;
            cin.ignore();
            cin.get();

            int aleatorio;

            do{
                aleatorio = rand() % quantidade;
            }while(sorteados[aleatorio]);

            cout<< "O nome sorteado foi " << nomes[aleatorio]<<endl;
            sorteados[aleatorio] = true;

        }
        cout <<"Já não tem elemetos na roleta"<<endl;
        
    }else if(escolha == 2){
        double numeros[quantidade];
        bool sorteados[quantidade]= {false};

        for(int i = 0; i<quantidade; i++){
            cout<< "Insira o numero " << i+1 <<":";
            cin>>numeros[i];
        }

        for(int i = 0; i<quantidade; i++){
            cout<< "Para sortear o Numero use o Enter"<<endl;
            cin.ignore();
            cin.get();

            int aleatorio;

            do{
                aleatorio = rand() % quantidade;
            }while(sorteados[aleatorio]);

            cout<< "O numero sorteado foi " << numeros[aleatorio]<<endl;
            sorteados[aleatorio] = true;

        }
        cout <<"Já não tem elemetos na roleta"<<endl;
        
    }
    return 0;
}
