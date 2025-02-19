#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
srand(time(0));



string escolha;
cout << "escolhe 'cara' ou 'coroa': ";
cin >> escolha;

int flip = rand() % 2;
string resultado = (flip == 0)? "cara" : "coroa";
cout << "o teu resultado foi: " << resultado << endl;

if (resultado == escolha){
    cout << "ganhaste !" << endl;
}else{
    cout << "perdeste " << endl;
}

return 0;
}

 







