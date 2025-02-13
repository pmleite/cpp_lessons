#include <iostream>

using namespace std;

struct letraDeFrase{
    char letra;
    bool acertou;
};

bool acertouFrase = false;

int main(){

    system("clear");

    string frase;
    cout << "Digite uma frase: ";
    getline(cin, frase);

    letraDeFrase letrasDaFrase[size(frase)];

    for(int i = 0; i < size(frase); i++){
        letrasDaFrase[i].letra = frase[i];
        letrasDaFrase[i].acertou = false;
    }

    while(!acertouFrase){

        system("clear"); 

        for(letraDeFrase x : letrasDaFrase){
            if(x.letra != ' '){
                if(x.acertou){
                    cout << x.letra << " ";
                }else{
                    cout << "_ ";    
                }    
            }else{
                cout << "  ";
            } 
        }
        cout << "\n\n";

        char l;
        cout << "Digite uma letra: ";
        cin >> l;

        for(letraDeFrase &x : letrasDaFrase){
            if(x.letra == l){
                x.acertou = true;
            }
        }

        //Verifica se acertou a frase toda
        acertouFrase = true;
      
       for(letraDeFrase x : letrasDaFrase){
            if(x.letra != ' '){
                if(!x.acertou){
                    acertouFrase = false;
                }
            }
        }



       

        if(acertouFrase){
            system("clear");
            cout << "Parabéns, você acertou a frase!\n\n" << endl;
            cout << "Frase: ";
            for(letraDeFrase x : letrasDaFrase){
                cout << x.letra;
            }
            cout << "\n";
        }
    }










    return 0;
}