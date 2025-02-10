#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){

    srand(time(0));

    int numeroAleatorio = rand() % 20 + 1;
    int palpite;
    int tentativas = 0;

    cout << "Adivinhe o número de 0 a 20!" << endl;

    while(true){

        cout << "Digite um número: ";
        cin >> palpite;
        tentativas ++;

        if(palpite < numeroAleatorio){
            cout << "O número é maior que " << palpite << endl;

        } else if(palpite > numeroAleatorio){
            cout << "O número é menor que " << palpite << endl;

        } else if(palpite == numeroAleatorio){
            cout << "Boa acertaste! É o número " << numeroAleatorio << "!" <<
            endl;
            cout << "E acertaste em " << tentativas << " tentativas!" << endl;
            break;
        }
    }

    return 0;
}