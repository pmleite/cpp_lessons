#include <iostream>
using namespace std;

int main () {
int soma = 0,numero = 0;
int tabuada[10] = {10,9,8,7,6,5,4,3,2,1};

cout << "Digite o numero para gerar a tabuada invertida: ";
cin >> numero;

for (int i = 0; i<10; i++){
soma += (numero * tabuada[i]);

cout << numero << " x " << tabuada[i] << " = " << (numero*tabuada[i]) << " (Soma: " << soma << ")" << endl;

}

cout << "Soma total: " << soma << endl;

}
