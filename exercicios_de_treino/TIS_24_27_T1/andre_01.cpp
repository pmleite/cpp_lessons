#include <iostream>

using namespace std;

int main(){
    float notas[3];
    float soma = 0;

    cout << "Digite as notas:" << endl;
    for (int i = 0; i < 3; i++){
        cout << "Nota " << i + 1 << " : " << endl;
        cin >> notas[i];
    }
    for (int i = 0; i < 3; i++){
        soma += notas[i];
    }

    float media = soma / 3;

    cout << "A média das notas é: " << media << endl;

    return 0;
}