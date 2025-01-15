#include <iostream>
using namespace std;

int main(){
    int numero1 = 4;
    int numero2 = 14;
    int palpite;

    cout << "Tenta adivinhar um número entre 0 e 30" << endl;

    while(true){
        cin >> palpite;
        if (numero1 == palpite || numero2 == palpite){
        cout << "Parabéns, acertaste" << endl;
        break;
        }
        else
        {
        cout << "Erraste, tenta de novo" << endl;
        }
        
    }

return 0;
}