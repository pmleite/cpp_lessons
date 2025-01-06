#include <iostream>
#include <cstdlib>
#include <unistd.h>

using namespace std;

#define MAX_NUMBER       76
#define MAX_NUM_OF_CARDS 5

int tmpCard[25];

struct numero{
    int  num;
    bool sts;
};

numero painel[MAX_NUMBER];

void initPainel(){
    for(int i = 0; i < MAX_NUMBER; i++){
        painel[i].num = i + 1;
        painel[i].sts = false;
    }
}

void geraCartao(){
    srand(time(0));
    for(int i = 0; i < 25; i++){
        tmpCard[i] = rand() % MAX_NUMBER;
        //Verifica se o numero ja foi gerado anteriormente
        for(int j = 0; j < i; j++){
            if(tmpCard[j] == tmpCard[i]){
                i--;
                break;
            }
        }
    }
}

void printCard(){
    for(int i = 0; i < 25; i++){
        cout << tmpCard[i] << " ";
        if((i + 1) % 5 == 0)cout << endl;  
    }
}

void imprimirPainel(){
    for(int i = 0; i < MAX_NUMBER; i++){
        cout << painel[i].num << " " << painel[i].sts << " ";
        if((i + 1) % 10 == 0)cout << endl;
    }
}

void sortearNumero(){
    int num = rand() % MAX_NUMBER;
    //Verificar se o número já foi sorteado   
    if(painel[num-1].sts == false){
        painel[num-1].sts = true;
    }
}



int main(){
    initPainel();
    geraCartao();
    printCard();
    imprimirPainel();

 for(int i = 0; i < 75; i++){
        sortearNumero();
        imprimirPainel();
        sleep(2);
        system("clear");
    }
    
    return 0;
}