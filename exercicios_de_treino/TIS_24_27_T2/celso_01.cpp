#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(){
srand(time(0));

while(true){
    system("clear");
    string jogador,computador;
    string opcoes[3] = {"Pedra","Papel","Tesoura"};
    cout<<"Escolha a sua opção: ";
    cin>>jogador;

    if(jogador=="Pedra" || jogador=="Papel"||jogador=="Tesoura"){
        computador = opcoes[rand() % 3];

        cout<<"tu escolheste: "<<jogador<<endl;
        cout<<"O computador escolheu: "<<computador<<endl;
    }
    
    if (jogador == computador){
        cout<<"Empataram ";
    }else if((jogador== "Pedra" && computador == "Tesoura")||
        (jogador== "Papel" && computador == "Pedra")||
        (jogador== "Tesoura" && computador == "Papel")){
            cout<<" Tu ganhaste ";
    }else{
        cout<<"O computador ganhou "<<endl;
        
    }


}
return 0;
}
