#include <iostream>

using namespace std;

int main() {
    char frase[100], fraseEscondida[100];
    cout << "Introduza a frase: ";
    cin.getline(frase, 100);
    
    int tamanho = 0;
    while (frase[tamanho] != '\0') {
        if (frase[tamanho] != ' ') {
            fraseEscondida[tamanho] = '_';
        } else {
            fraseEscondida[tamanho] = ' ';
        }
        tamanho++;
    }
    fraseEscondida[tamanho] = '\0';
    
    char letra;
    bool acertou;

    while (true) {
        bool completa = true;
        for (int i = 0; i < tamanho; i++) {
            if (fraseEscondida[i] != frase[i]) {
                completa = false;
                break;
            }
        }
        if (completa) break;
        
        cout << "\nFrase: " << fraseEscondida << endl;
        cout << "Introduza uma letra: ";
        cin >> letra;
        acertou = false;
        
        for (int i = 0; i < tamanho; i++) {
            if (frase[i] == letra) {
                fraseEscondida[i] = frase[i];
                acertou = true;
            }
        }
    }

    cout << "\nParabéns! A frase era: " << frase << "\n";
    return 0;
}