#include<iostream>
using namespace std;

    string animais[5] ={"gato","rato","vaca","papagaio","macaco"};

int main(){

    int numeros = rand() % 5 + 1;
    string y;
        while(true){
        cout<<"Tente adevinhar o animal que o PC está penssando: ";
        cin >>y;
        if(animais[numeros] == y){
        cout<<"Voce acertou o animal que era"<<animais[numeros]<<endl;
        break;
        }else{
            cout<<"Voce nao acertour o animal tente novamente"<<endl;

        }
    }
}