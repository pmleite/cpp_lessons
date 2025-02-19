#include <iostream>

using namespace std;

struct Marvel{

    string b = "batman";
    string s = "spiderman";
    string h = "hulk";
    string i = "ironman";
    string w = "wonderwoman";

};

Marvel personagens;

void joguin(){

    string personagem;
    string escolha;
    bool acerto = false;

    srand(time(NULL));
    int gera = rand() % 5;

    if(gera == 0) personagem = personagens.b;
    else if(gera == 1) personagem = personagens.s;
    else if(gera == 2) personagem = personagens.h;
    else if(gera == 3) personagem = personagens.i;
    else personagem = personagens.w;

    string linhas(personagem.size(), '_');

    while(linhas != personagem){

        cout << "Personagem: " << linhas;
        cout << "\nInsira uma letra ou o nome completo: ";
        cin >> escolha;

        if(escolha == personagem){

            linhas = personagem;
            break;

        }

        if(escolha.size() == 1){

            char letra = escolha[0];
            acerto = false;

            for(size_t i = 0; i < personagem.size(); i++){

                if(personagem[i] == letra){

                    linhas[i] = letra;
                    acerto = true;

                }

            }

            if(!acerto){
                system("clear");
                cout << "Errou a letra, tente outra !" << endl;
            } else{
                system("clear");
                cout << "Acertou ! Mais letras !" << endl;
            }

        }

        else{
            system("clear");
            cout << "Errou o nome, tente outro !" << endl;
        }


    }    
        system("clear");
        cout << "Acertou o personagem: " << personagem;

}

int main(){

    joguin();

}