#include <iostream>
using namespace std;

int* gerarNum(){
    static int dado[3];
    srand(time(NULL));
    for(int i = 0; i < 3; i++){
        dado[i] = i + rand() % 6;

    }

}
int* escolha(){
    static int escolha[3];
    cout << "escolha 3 numeros: ";
    for(int i = 0; i < 3; i++)
        cin >> escolha[i];
}

void mult(){
    int* escolha[3];
    int* dado[3];
    int aposta;
    int ganho;
    cout << "quanto quer apostar?";
    cin >> aposta;
    for(int i = 0; i < 3; i++){
        for(int n = 0; n < 3; n++){
            if(escolha[n] == dado[i]){
                ganho= aposta * 2 + ganho;
            }

        }
    }
    if(ganho > aposta){
        cout << "ganhou " << ganho << endl;
    
    }else{
        cout << "perdeu";
    }
    cout << "Os dados sorteados foram: " << dado[0]<<" "<< dado[1]<<" "<< dado[2]<< endl;
}

int main(){

    system("clear");
    mult();

    
}