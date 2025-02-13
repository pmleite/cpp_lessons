#include <iostream>
using namespace std;

struct letras {
    string frase = "agua mole em pedra dura tanto bate ate que fura";
    char letra;
    bool condicao;
};

int main() {
    letras letras;
    string fraseadivinha(letras.frase.length(), '_');

    for (int i = 0; i < letras.frase.length(); i++) {
        if (letras.frase[i] == ' ') {
            fraseadivinha[i] = ' ';
        }
    }

    while (fraseadivinha != letras.frase) {
        for (char c : fraseadivinha) {
            cout << c << " ";
        }

        cout << endl;
        cout << "Digite uma letra: ";
        cin >> letras.letra;

        for (int i = 0; i < letras.frase.length(); i++) {
            if (letras.frase[i] == letras.letra) {
                fraseadivinha[i] = letras.letra;
            }
        }
    }

    return 0;
}


