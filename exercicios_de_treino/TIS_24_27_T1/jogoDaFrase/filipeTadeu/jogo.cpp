#include <iostream>
using namespace std;

struct Jogo {
string oculto;
};

int main() {
    Jogo jogo;
     string frase;
     cout << "frase: ";
     getline(cin,frase);
           for (char l : frase) {
            jogo.oculto += (l == ' ') ? ' ' : '_';
        }
system("clear");
    while (jogo.oculto != frase) {
        for (char l : jogo.oculto){ cout << l << " ";}
         cout << endl;
        cout << "escreve uma letra: ";
        char letra;
        cin >> letra;
        int i = 0;
        for (char l : frase) {
            if (l == letra) {
                jogo.oculto[i] = letra;
            }
            i++;
        }
    }
    cout << "Acertaste a frase era: " << frase << endl;
    return 0;
}