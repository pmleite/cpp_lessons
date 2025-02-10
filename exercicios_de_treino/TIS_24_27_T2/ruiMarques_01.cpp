#include <iostream>

using namespace std ;

string carros [5] = {"Toyota", "Mercedes", "Fiat", "Renault", "BMW"};


int main () {

srand (time(0));
int numeros = rand () % 5;
string y; 

    for (int i = 0; i < 3; i++){
        cout << "Tente adivinhar qual carro o PC está pensando, BMW,Toyota, Mercedes, Renault ou Fiat" << endl ;
        cin >> y;
    
    if (carros[numeros]== y){
        cout << "Tu acertaste qual era o carro" << endl;

    }else{
     cout << "Tu erraste qual era o carto. Tente de novo" << endl;



    }

    }




}