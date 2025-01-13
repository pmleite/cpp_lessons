#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

string generator (int tamanho) {
    string caracteres = "QWERTYUIOPASDFGHJKLÇZXCVBNMqwertyuiopasdfghjklçzxcvbnm1234567890";
    string senha;
    for (int i=0; i < tamanho; i++)
    senha += caracteres[rand() % caracteres.length()];
    return senha;  
}

int main(){
    srand(time(0));
    int tamanho;
    cout << "Insira o tamanho Desejado para a senha"<<endl;
    cin >> tamanho;
    cout << "Senha Gerada: " << generator(tamanho) <<endl;
}

