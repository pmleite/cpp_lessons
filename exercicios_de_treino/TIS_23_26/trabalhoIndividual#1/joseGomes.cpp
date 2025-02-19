/** 
 * @file joseGomes.cpp
 * @date 14-02-2025
 * @brief Trabalho para apresentar, jogo de Ggambu
 */

#include <iostream>
using namespace std;

struct Ggambu{
    string nomeJogador;
    int numBerlindes;
};

bool par(int num){
    return num % 2 == 0;
}

void rodada(Ggambu& player, Ggambu& bot){
    int palpite, aposta;
    cout << "Quantos berlindes deseja apostar?\n";
    cin >> aposta;
    if(aposta > player.numBerlindes){
        cout << "Não tem berlindes suficientes\n";
        return;
    }
    cout << "O seu oponente escondeu um numero par ou impar? (0 - par, 1 - impar)\n";
    cin >> palpite;
    bool pares = par(aposta);
    int botPalpite = rand()%2;
    cout << "O teu oponente escolheu " << (botPalpite == 0 ? "par" : "impar") << endl;

    if(palpite == botPalpite){
        cout << player.nomeJogador << " venceu a aposta e ganhou " << aposta << " berlindes\n";
        cout << bot.nomeJogador << " perdeu " << aposta << endl;
        player.numBerlindes += aposta;
        bot.numBerlindes -= aposta;
    }
    else{
        cout << bot.nomeJogador << " venceu a aposta e ganhou " << aposta << " berlindes\n";
        cout << player.nomeJogador << " perdeu " << aposta << endl;
        player.numBerlindes -= aposta;
        bot.numBerlindes += aposta;
    }

    cout << player.nomeJogador << " tem " << player.numBerlindes << " berlindes\n";
    cout << bot.nomeJogador << " tem " << bot.numBerlindes << " berlindes\n";
}

int main(){
    srand(time(0));
    Ggambu J1{"Jogador", 10};
    Ggambu J2{"Bot", 10};
    cout << "Vamos começar o jogo\nCada jogador começa com 10 berlindes bla bla bla\n";
    while(J1.numBerlindes > 0 && J2.numBerlindes > 0){
        rodada(J1, J2);
    }

    if(J1.numBerlindes >= 20){
        cout << J1.nomeJogador << " ganhou com " << J1.numBerlindes << " berlindes\n";
    }else if(J2.numBerlindes >= 20){
        cout << J2.nomeJogador << " ganhou com " << J2.numBerlindes << " berlindes\n";
    }

    return 0;
}