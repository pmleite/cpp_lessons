//18

#include <iostream>

using namespace std;



bool usadas[256] = {false};


int main() {
    char b;
    bool acertou = false;
    string frase;
    cout << "insira a frase: " <<endl;
    getline(cin, frase);


    while (!acertou) {
        acertou = true;
        for (char a : frase) {
            if (a == ' ' || usadas[(unsigned char)a]) {
                cout << a;
            } else {
                cout << "_";
                acertou = false;
            }
        }


        if (acertou) break;


        cout << "\n\nInsira a letra que penses que esta na frase escondida" << endl;
        cin >> b;
        usadas[(unsigned char) b] = true;
      }
      cout << "\n\nAcertaste a frase escondida."<<endl;
      return 0;
}