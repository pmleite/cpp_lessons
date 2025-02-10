#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int balance = 100;
int multihalf = 2;
int multifull = 10;

string symbols[] = {"🍒","🍊","🍏","🍇","🍓"};


int slots(){
cout << "Bem vindo aos Slots!\n";
    cout << "Tem " << balance << " de dinheiros\nQuanto deseja apostar?\n";
while(true){

    int bet;
    cin >> bet;
    system("clear");
    if(bet > balance){
        cout << "Não tem dinheiros suficientes.";
        return 0;
    }
    if(bet <= 0){
        cout << "Não dá para fazer isso.";
        return 0;
    }
    balance -= bet;

    string slot1 = symbols[rand() % 5];
    string slot2 = symbols[rand() % 5];
    string slot3 = symbols[rand() % 5];


    if((slot1 == slot2) && (slot2 == slot3)) {
        cout << "\n[" << slot1 << "] [" << slot2 << "] [" << slot3 << "]";
        cout << "Jackpot! Ganhou " << bet*multifull << " dinheiros !\n";
        balance += bet*multifull;
        cout << "Tem " << balance << " de dinheiros\nQuanto deseja apostar?\n";

    } else if(slot1 == slot2 || slot1 == slot3 || slot2 == slot3){
        cout << "\n[" << slot1 << "] [" << slot2 << "] [" << slot3 << "]";
        cout << "Quase! Ganhou " << bet*multihalf << " dinheiros !\n";
        balance += bet*multihalf;
        cout << "Tem " << balance << " de dinheiros\nQuanto deseja apostar?\n";
    } else {
        cout << "\n[" << slot1 << "] [" << slot2 << "] [" << slot3 << "]";
        cout << "Perdeu! Que pena.\n";
        cout << "Tem " << balance << " de dinheiros\nQuanto deseja apostar?\n";
    }

}

}
int main(){
    system("clear");
    srand(time(0));
    slots();
}
