#include <iostream>

using namespace std;

int myArry[] = {1,2,3,4,5,6,7,8,9,10}; 
float myArry2[] = {1.0,2.0,3.0,4.0,5.0}; 
char vogais[5] = {'a','e','i','o','u'};

/**
 * @brief Função que aceita dois inteiros e devolve
 *        a soma dos dois
 * @param a inteiro
 * @param b inteiro
 * @return soma dos dois inteiros
 */
int somaA(int a, int b){
    return a + b;
}

/**
 * @brief Função que aceita um inteiro e um float
 *        e devolve a soma dos dois
 * @param a inteiro
 * @param b float
 * @return soma dos dois
 */
float somaB(int a, float b){
    return a + b;
}

/**
 * @brief Função que aceita um float e um inteiro
 *        passados por referência e que devolve a soma
 *        dos dois
 * @param a inteiro
 * @param b float
 * @return soma dos dois
 */
float somaC(float &a, int &b){
    a=40.0;
    return a + b;
}

/**
 * @brief Função que aceita um array de inteiros
 *        e devolve o primeiro elemento deste array
 * @param a array de inteiros
 * @return primeiro elemento do array
 */
int primeiroElemento(int a[]){
    return a[0];    
}

/**
 * @brief Função que aceita um array e muda o valor
 *        do primeiro elemento para 12345
 * @param a array de inteiros
 */
void mudaElemento(int a[]){
    a[0]=12345;
}

/**
 * @brief Fução que aceita um array de inteiros, um inteiro
 *        e devolve o elemento do array na posição passada
 *        como parâmetro
 * @param a array de inteiros
 * @param i inteiro
 * @return elemento do array na posição i
 */
int elemento(int a[], int i){
    return a[i];
}

/** 
 * @brief Função que aceita um array de inteiros, um inteiro
 *        e mostra os elemento do array até à posição passada
 *        como valor
 * @param a array de inteiros
 * @param i indice máximo do array, passado por valor com:
 *          sizeof(a)/sizeof(a[0])
 */
void mostraArray(int a[], int i){
    for(int j=0; j<i; j++){
        cout << a[j] << " ";
    }
    cout << endl;   
}

/**
 * @brief Função que aceita um array de inteiros, um inteiro
 *        e devolve a soma dos elementos do array até à 
 *        posição passada como valor
 * @param a array de inteiros
 * @param i inteiro
 * @return soma dos elementos do array até à posição i
 */
int somaArray(int a[], int i){
    int soma=0;
    for(int j=0; j<i; j++){
        soma += a[j];
    }
    return soma;
}

/**
 * @brief Função que calcaular a área de um retângulo
 * @param a largura do retângulo
 * @param b altura do retângulo
 * @return área do retângulo
 */
float area(float a, float b){
    return a*b;
}

/**
 * @brief Função que adiciona 10 a um inteiro
 * @param a inteiro
 * @return inteiro
 */
int add10(int a){
    return a+10;
}

/**
 * @brief Funcao que devolve o dobro de um número mais
 *        10 unidade. (deve recorer à função add10)
 * @param a inteiro
 * @return inteiro
 */
int dobroMais10(int a){
    return add10(a*2);
}






int main(){


    return 0;
}