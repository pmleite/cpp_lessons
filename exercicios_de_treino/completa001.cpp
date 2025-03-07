#include <iostream>
#include <math.h>

using namespace std;

struct carro{
    string marca;
    int qnt;
};

carro carros[] = {
    {"Fusca", 12},
    {"Civic", 5},
    {"Palio", 54},
    {"Corsa", 22},
    {"Gol", 100},
    {"Uno", 20},
    {"Fox", 50},
    {"Onix", 280},
    {"HB20", 1},
    {"Kwid", 10}
};

void calculaMedia(carro carros[], int n){
    int soma = 0;
    for(int i = 0; i < n ; i++){
        soma += carros[i].qnt;
    }
    cout << "A media de carros e: " << soma/n << endl;
}


void calculaMediana(carro carros[], int n){
    int mediana;
    if(n % 2 == 0){
        mediana = (carros[n/2].qnt + carros[n/2 - 1].qnt) / 2;
    }else{
        mediana = carros[n/2].qnt;
    }
    cout << "A mediana de carros e: " << mediana << endl;
}

void calculaModa(carro carros[], int n){
    int moda = 0;
    int maior = 0;
    for(int i = 0; i < n; i++){
        if(carros[i].qnt > maior){
            maior = carros[i].qnt;
            moda = i;
        }
    }
    cout << "A moda de carros e: " << carros[moda].marca << endl;
}

int main(){

    calculaMedia(carros, 10);
    calculaMediana(carros, 10);
    calculaModa(carros, 10);
    return 0;
   
}



