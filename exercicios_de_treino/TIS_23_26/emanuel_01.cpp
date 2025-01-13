#include <iostream>
#include <iomanip>

using namespace std;

float pontos = 0;
float pontosPorEnter = 1;


float upgrades(float &Enters, float quantideNecessaria, float &multiPreco){
    if (pontos >= quantideNecessaria){
        system("clear");
        pontos -= quantideNecessaria;
        pontosPorEnter += Enters;
        quantideNecessaria *= multiPreco;

        cout << "Upgrade Comprado\n";


        cout << fixed << setprecision(1);
        cout << pontos << endl;
    }else{
        system("clear");
        cout << "Impossivel a compra\n";
        cout << fixed << setprecision(1);
        cout << pontos << endl;
    }
    return quantideNecessaria;
}

void loja(){
    int escolha;
    static float precoInicial1 = 10;
    static float pontosAMais1 = 0.3;
    static float precoInicial2 = 50;
    static float pontosAMais2 = 0.6;
    static float multiPreco = 1.2;

    system("clear");
    cout << "Upgrade 1\n Custa :" << precoInicial1<< endl;
    cout << "Upgrade 2\n Custa :" << precoInicial2<< endl;
    cin >> escolha;


    if (escolha == 1){
        upgrades(pontosAMais1, precoInicial1, multiPreco);
    }if (escolha == 2){
        upgrades(pontosAMais2, precoInicial2, multiPreco);
    }

}

void farm(){
    int escolha;

    cout << "Clique 1 para começar a farmar ou 2 para abir a loja" << endl;
    cin >> escolha;

    if (escolha == 1){
        system("clear");

        pontos += pontosPorEnter;

        cout << fixed << setprecision(1);
        cout << "Pontos: " << pontos << endl;


    }
    if (escolha == 2){
        loja();
    }
}


int main(){

    while (true)
    {
        farm();
    }
    

    return 0;
}