#include <iostream>

using namespace std;

int myArr[] = {1,2,3,4,5,6,7,8,9,6,5,4,8,7};


/**
 * @brief calculo de formula
 * @param float x  - valor de x (float)
 * @param float y  - valor de y (float)
 * @param float z  - valor de z (float)
 * @return float - resultado da formula
 * @details
 * A formula é a seguinte: x² + y² + z²
 */
float formula(float x, float y, float z){
    return (x*x) + (y*y) + (z*z);
}

/**
 * @brief verifica se o numero é par ou impar
 * @param int num - numero a ser verificado
 * @return string - "Par" ou "Impar"
 */
 string parImpar(int x){
    if(x%2 == 0){
        return "Par";
    }else{
        return "Impar";
    }
}

/**
 * @brief calcula o determinante de uma matriz 2x2
 * @param int a - elemento da matriz
 * @param int b - elemento da matriz
 * @param int c - elemento da matriz
 * @param int d - elemento da matriz
 * @return int - determinante da matriz
 * @details (a*d) - (b*c)
 */
int determinante(int a, int b, int c, int d){
    return (a*d) - (b*c);
}









string parImpar(){

    int pares=0;
    int arrSize = sizeof(myArr)/sizeof(myArr[0]);
    for(int i=0; i<=arrSize; i++){
        if(myArr[i]%2 == 0){
            pares++;
        }
    }
    return "Pares: " + to_string(pares) + 
    "\nImpares: " + to_string(arrSize-pares);
}


int main(){

    cout << parImpar() << endl;
    return 0;
}