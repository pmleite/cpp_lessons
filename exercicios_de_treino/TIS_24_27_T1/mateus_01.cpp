#include <iostream>
using namespace std;

int main(){
   const int tamanho = 5;
   const char*  jogadores[tamanho] = {"Ronaldo","Messi","Neymar","Mbappe","Haaland"};

   cout << "estes sao os jogadores disponiveis" << endl;
   for (int i = 0; i < tamanho; i++){
   cout << i + 1  <<  ". " << jogadores[i] << endl;



   }
   
 int chave = 0;


 int indiceAleatorio = chave % tamanho;
 cout << "digite um numero para gerar um jogador aleatorio: " << endl;
 cin >> chave;

cout << "este é o jogador aleatório " << jogadores[indiceAleatorio] << endl;

return 0;



}