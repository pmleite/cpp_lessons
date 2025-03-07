#include <iostream>
#include "funcoes_IV_f.h"

using namespace std;

int soma(int z, int w){
    return z+w;
}

//Funçao que soma o g, passado por referência
//com o valor retornado da função soma de x e y
int soma2(int &g){
    return g + soma(x,y);
}

//Passar um valor por uma função
void mostraValor(int g){
    system("clear");
    cout << g << endl;
}