#include <iostream>
using namespace std;

int main(){
    int jogos = 5;
    int golos[jogos];
    int totaldegolos;
   
    for(int i = 0; i < jogos; i++){
        cout << "Digite o total de golos no " << i + 1 << " jogo:";
        cin >> golos[i];
        totaldegolos += golos[i]; 
    }

    cout << "Em " << jogos << " jogos a equipa marcou um total de " << totaldegolos << " golos" <<  endl;
}