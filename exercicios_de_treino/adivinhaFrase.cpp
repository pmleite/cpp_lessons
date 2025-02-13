#include <iostream>

using  namespace std;

struct letraDaFrase{
    char letra;
    bool adivinhada;
};

string getFrase(){
    system("clear");
    string frase;
    cout << "digite a frase a adivinhar " << "\n";
    getline(cin, frase);
    system("clear");
    return frase;
}







bool terminou = false;

int main(){

    string frase = getFrase();
    letraDaFrase letras[frase.size()]; //end memoria



    //inicializa vetor de letras
    for(int i = 0; i < frase.size(); i++){
        letras[i].letra = frase[i];
        letras[i].adivinhada = false;
    }

    //loop principal
    while(!terminou){

        //limpa ecra
        system("clear");

        //imprime título
        cout << "Adivinha a frase!" << "\n";

        //imprime frase
        for(letraDaFrase l : letras){
            if(l.letra != ' ') {
                l.adivinhada ? cout << l.letra << " " :
                               cout << "_ "; 
            }else{
                cout << "  ";
            }
        }
        //imprime quebra de linha
        cout << "\n";

        //pede letra
        char letra;
        cout << "digite uma letra: ";
        cin >> letra;

        //verifica se a letra está na frase
        bool acertou = false;
        for(letraDaFrase &l : letras){
            if(l.letra == letra){
                l.adivinhada = true;
                acertou = true;
            }
        }

         //verifica se terminou
        for(letraDaFrase l : letras){
            if(l.letra != ' ' && !l.adivinhada){
                terminou = false;
                break;
            }else{
                terminou = true;
            }  
        }
    }
    system("clear");
    //imprime título
    cout << "Adivinha a frase!" << "\n";

    //Quebra de linha
    cout << "\n";

    //imprime frase
    for(letraDaFrase l : letras){
        if(l.letra != ' ') {
            l.adivinhada ? cout << l.letra << " " :
                            cout << "_ "; 
        }else{
            cout << "  ";
        }
    }
    cout << "\n";
    cout << "Parabéns! Adivinhaste a frase!" << "\n";
    return 0;
}