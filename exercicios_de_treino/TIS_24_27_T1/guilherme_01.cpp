#include <iostream>
#include <cctype>

using namespace std;

string texto;
int contadorVogal = 0;
int contadorConssoantes = 0;

int main(){
    cout << "digite uma frase: ";
    getline(cin, texto);

    for(char &x : texto ){
        if(isalpha(x));
        if( x == 'a' || x == 'e' || x == 'u' || x == 'i' || x == 'o' ){
            contadorVogal++;
    
        }
    else{
        contadorConssoantes++;
    }

    }
    cout << "O numero de vogais é: " << contadorVogal << endl;
    cout << "O numero de conssuantes é: " << contadorConssoantes << endl;
}