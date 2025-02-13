#include <iostream>
#include <string>

using namespace std;

int main() {
    string frase_secreta;
    cout << "Digite a frase secreta: ";
    getline(cin, frase_secreta);

    system("cls");

    string frase_oculta = frase_secreta;
    int letras_a_descobrir = 0;

    for (int i = 0; i < frase_oculta.length(); i++) {
        if (frase_oculta[i] != ' ') {
            frase_oculta[i] = '_';
            letras_a_descobrir++;
        }
    }

    int tentativas_erradas = 0;
    int acertos = 0;
    char letra;

    while (acertos < letras_a_descobrir) {
        system("cls");
        cout << "Frase: " << frase_oculta << endl;
        cout << "Tentativas erradas: " << tentativas_erradas << endl;
        cout << "Digite uma letra: ";
        cin >> letra;

        bool acertou = false;

        for (int i = 0; i < frase_secreta.length(); i++) {
            if (frase_secreta[i] == letra && frase_oculta[i] == '_') {
                frase_oculta[i] = letra;
                acertos++;
                acertou = true;
            }
        }

        if (!acertou) {
            tentativas_erradas++;
        }
    }

    system("cls");
    cout << "Parabens! Voce acertou a frase: " << frase_secreta << endl;

    return 0;
}