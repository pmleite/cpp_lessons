#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main(){
    srand(time(0));
    int jogador, computador = rand() % 3 + 1;

    cout << "Escolha: 1.(Papel), 2.(Pedra), 3.(Tesoura)" << endl;
    cin >> jogador;

    if (computador == 1) cout << "O computador escolheu papel" << endl;
    if (computador == 2) cout << "O computador escolheu pedra" << endl;
    if (computador == 3) cout << "O computador escolheu tesoura" << endl;

    if (computador == jogador) {
        cout << "Empate!" << endl;
    } else if ((jogador == 1 && computador == 2) ||
                ( jogador == 2 && computador == 3) ||
                ( jogador == 3 && computador == 1)){
                    cout << "Tu ganhaste!" << endl;
                } else {
                    cout << "Tu perdeste!" << endl;
                }
    return 0;
}