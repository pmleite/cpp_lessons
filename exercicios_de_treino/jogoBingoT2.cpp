#include <iostream>
#include <cstdlib>
#include <unistd.h>
#include <iomanip>

#define MAX_NUMBER 75
#define MAX_NUM_OF_CARDS 5
using namespace std;

struct numero{
    int num;
    bool sts;
};

numero painel[MAX_NUMBER];

int ct = 0;
int check = false;
int tmpCard[25];

void initPainel(){
    for(int i = 0; i < MAX_NUMBER; i++){
        painel[i].num = i + 1;
        painel[i].sts = false;
    }
}

void mostraPainel(){
    cout << "\033[32mPainel de números sorteados" << endl;
    cout << "\033[0m";
        for(int i = 0; i < MAX_NUMBER; i++){
            painel[i].sts == true ? cout << "\033[31m" : cout << "\033[0m";
            cout << setw(2) << painel[i].num << " ";
            if((i + 1) % 10 == 0)cout << endl;
        }
    cout << endl; 
    cout << "\033[0m";  
}


void sortearNumero(){
    int num = rand() % MAX_NUMBER + 1;
    if(painel[num-1].sts == false){
        painel[num-1].sts = true;
        cout << "Numero sorteado: " << num << endl;
        check = false;
        ct++;
    }
}

void geraCartao(){
    //srand(time(0));
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
        cout << setw(4) << tmpCard[i] << " ";
        if((i + 1) % 5 == 0)cout << endl;  
    }
}   

int main(){
    
    
    system("clear");

    for(int i = 0 ; i < MAX_NUM_OF_CARDS; i++){
        cout << "Cartão " << i + 1 << endl; 
         geraCartao();
         printCard();
        cout << endl; 
    }

    sleep(5);

    system("clear");
    initPainel();
    mostraPainel();
    
    srand(time(0));
    while(ct < 75){
        system("clear");
        sortearNumero();
        mostraPainel();
        while(check == false){
            cout << "ENTER para novo número " << endl;
            cin.get();
            check = true;
        }  
    }
    cout << "BINGO!" << endl;
    return 0;
}