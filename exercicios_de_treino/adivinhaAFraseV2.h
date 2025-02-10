#include <iostream>
#include <iomanip>
#include <unistd.h>
#include <stdio.h>

struct letrasDaFrase{
    char letra;
    bool descoberta;
};  

bool adivinhou = false;

using namespace std;

void introScreen();
string getFrase();
void inicializaFraseParaVetor(string frase, letrasDaFrase vetor[]);
void atualizaEcra(letrasDaFrase vetor[], int tamanho);
void pedeLetra(letrasDaFrase vetor[], string frase, int tamanho);

