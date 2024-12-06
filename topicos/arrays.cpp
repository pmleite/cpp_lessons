#include <iostream>

using namespace std;

const int dimensao = 10;
int numerosImpares[dimensao];
int numerosPares[dimensao] = {0,2,4,6,8,10,12,14,16,18};
string nomeDosAlunos[] = {"Joao", "Maria", "Jose"};

int main(){

    for(int i = 0; i < dimensao; i++){
        cout << numerosPares[i] << endl; 
    }

    return 0;
}