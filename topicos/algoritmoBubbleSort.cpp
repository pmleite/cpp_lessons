#include <iostream>

using namespace std;

int myArr[] = {5, 2, 4, 6, 1, 3, 8, 7, 9, 0, 10}; 

int somaNumerosDoArray(int arr[], int& dim){
    int soma = 0;
    for(int i = 0; i < dim ; i++){
        soma += arr[i];
    }
    return soma;
}

int soma2numeros(int a, int b){
    cout << "Soma de int" << endl;
    return a + b;
}

double soma2numeros(double a, double b){
    cout << "Soma de double" << endl;
    return a + b;
}

double soma2numeros(int a, double b){
    cout << "Soma de int e double" << endl;
    return a + b;
}

int main(){

    cout << soma2numeros(5, 3) << endl;
    cout << soma2numeros(5.5, 3.5) << endl;
    cout << soma2numeros(5, 3.5) << endl;
   // int dim = sizeof(myArr)/sizeof(myArr[0]);
   // cout << somaNumerosDoArray( myArr, dim) << endl;
    return 0;
}