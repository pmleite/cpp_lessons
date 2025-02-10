#include <iostream>
#include <cstdlib> 
#include <ctime> 

using namespace std;

struct equipa{
    string nome;
    int golos;
    int pontos;
};

struct jogo{
    equipa equipa1;
    equipa equipa2;
};

void nomearEquipas(jogo &j){
    cout << "Nome da equipa 1: ";
    cin >> j.equipa1.nome;
    cout << "Nome da equipa 2: ";
    cin >> j.equipa2.nome;
}

void simular_jogo(jogo &j){

    srand(time(0));
    j.equipa1.golos = rand() % 6;
    j.equipa2.golos = rand() % 6;

    if(j.equipa1.golos > j.equipa2.golos){
        j.equipa1.pontos = 3;
        j.equipa2.pontos = 0;
    }else if(j.equipa1.golos < j.equipa2.golos){
        j.equipa1.pontos = 0;
        j.equipa2.pontos = 3;
    }else{
        j.equipa1.pontos = 1;
        j.equipa2.pontos = 1;
    }
}

void mostrarResultados(jogo &j){

    cout << "Resultado do jogo: " << endl;
    cout << "------------------" << endl;
    cout << j.equipa1.nome << " " << j.equipa1.golos << endl;
    cout << j.equipa2.nome << " " << j.equipa2.golos << endl;

    cout << "Pontos da equipa "  << endl;
    cout << "------------------" << endl;
    cout << j.equipa1.nome << " " << j.equipa1.pontos << endl;
    cout << j.equipa2.nome << " " << j.equipa2.pontos << endl;
}

int main(){
    system("clear");
    jogo j;
    nomearEquipas(j);
    simular_jogo(j);
    mostrarResultados(j);
    return 0;
}