#include <iostream>

using namespace std;

struct letraDaFrase{
    char letra;
    bool descoberta;
};

bool adivinhouFrase = false;

int main(){

    //limpa ecrã
    system("clear");

    //Pede frase ao utilizador
    string f;
    cout << "Digite a frase: " << "\n";
    getline(cin, f);

    //Passar a frase para o array do tipo letraDaFrase
    letraDaFrase frase[f.size()];
    for(int i = 0; i < f.size(); i++){
        frase[i].letra = f[i];
        frase[i].descoberta = false;
    }

    //Para testes mostrar as letras e estados
    /*
    for(letraDaFrase x : frase){
        cout << x.letra << " ";
        cout << x.descoberta << "\n";
    }
    */
    
    while(!adivinhouFrase){
        
       
       //Mostra a frase com as letras escondidas ou adivinhadas
        system("clear");
        cout << "\n";
        for(letraDaFrase x : frase){
            if(x.letra == ' '){
                cout << "  ";
            }else if(x.descoberta){
                cout << x.letra << " ";
            }else{
                cout << "_ ";
            }     
        }
        cout << "\n";

        //Pede ao utilizador para adivinhar uma letra
        char letra;
        cout << "Digite uma letra: " << "\n";
        cin >> letra;

        //Verificar se a letra existe na frase
        //bool existe = false;
        for(letraDaFrase &x : frase){
            if(x.letra == letra){
                x.descoberta = true;
                //existe = true;
            }
        }

        //Verificar se a frase foi adivinhada
        adivinhouFrase = true;
        for(letraDaFrase x : frase){
            if(x.letra != ' ' && !x.descoberta){
                adivinhouFrase = false;
            }
        }



    }

    //Mostra a frase com as letras escondidas ou adivinhadas
    system("clear");
    cout << "\n";
    for(letraDaFrase x : frase){
        if(x.letra == ' '){
            cout << "  ";
        }else if(x.descoberta){
            cout << x.letra;
        }else{
            cout << "_ ";
        }     
    }
    cout << "\n";

    cout << "Parabéns adivinhou a frase!" << "\n";
}