/*
Membros do grupo:
-Raul Alberto
-Rodrigo Furtado
*/


#include <iostream>


using namespace std;

int main() {
    string frase, fraseOculta;
    char letra;


    cout << "Escreve uma frase para o jogo: ";
    getline(cin, frase);

    
    fraseOculta = frase;
    for (int i = 0; i < fraseOculta.length(); i++) {
        if (fraseOculta[i] != ' ') {
            fraseOculta[i] = '_';
        }
    }

   
    while (fraseOculta != frase) {
        cout << "Frase: " << fraseOculta << endl;
        cout << "Escolhe uma letra: ";
        cin >> letra;


        for (int i = 0; i < frase.length(); i++) {
            if (frase[i] == letra) {
                fraseOculta[i] = letra;  // Substitui o underline pela letra
            }
        }
    }


    cout << "Adivinhaste a frase: " << frase << endl;
    return 0;
}


