#include <iostream>
using namespace std;

int main(){
    bool chaveVirada;
    char comando;

    while(true){
        cout << "Pressione 'c' para virar a chave do carro" << endl;
        cin >> comando;

        if(comando == 'c' || comando == 'C'){
            chaveVirada = true;
            break;

        } else {
         cout << "Nao foi possivel virar a chave do carro. Tente novamente" << endl;
        }
    }

    if(chaveVirada){
    while(true){
        cout << "Pressione 'L' para ligar o carro " << endl;
        cin >> comando;

        if(comando == 'l' || comando == 'L'){
            chaveVirada = true;
            cout << "O carro ligou Vrum Vrum!!!" << endl;
            break;

        } else {
            cout << "Nao foi possivel ligar o carro. Tente novamente ou chame um mecanico" << endl;
        }
    }
    }
    return 0;
}