#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){

srand(time(0));

string escolha;
cout << "escolhe 'cara' ou 'coroa' " << endl;
cin >> escolha;

int flip = rand() % 2;
 =  ? "cara" : "coroa";
cout << "o resultado foi : " <<  resultado << endl;

if (resultado == escolha){
    cout << "ganhaste" << endl;
}else{
    cout << "perdeste" << endl;
}

    return 0;
}