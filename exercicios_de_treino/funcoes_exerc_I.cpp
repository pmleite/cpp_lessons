#include <iostream>
#include <cmath>

using namespace std;

int myArr[];


/**
 *@brief Função que aceita um array com 20 elelmentos 
 *        inteiros e deveolve a média dos seus valores
 *@param array Array de inteiros
 *@return Retorna a média dos valores do array     
 */
float media(int elementos[]){
    int tamanhoDoArray = sizeof(elementos)/sizeof(elementos[0]);
    int soma = 0;
    for(int i =0 ; i<tamanhoDoArray; i++){
        soma += elementos[i];
    }
    return soma/tamanhoDoArray;
}

/**
 *@brief Função que aceita um array de inteiros

 *@param array Array de inteiros
 *@return A palavra "Par" se a média for par
 *        A palavra "Impar" se a média for impar   
 */
string parOuImpar(int elementos[]){
    int dimArr = sizeof(elementos)/sizeof(elementos[0]);
    int somaArr = 0;
    float mediaArr = 0;

    for(int i =0 ; i<dimArr; i++){
        somaArr += elementos[i];
    }

    mediaArr = somaArr/dimArr;

    if(int(mediaArr)%2 == 0){
        return "Par";
    }else{
        return "Impar";
    }



}



int main(){

    

    return 0;
}