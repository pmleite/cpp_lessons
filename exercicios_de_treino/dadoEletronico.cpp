
#include <iostream>

using namespace std;
int contador=0;

void mensagemTopo(){
    cout << "\033[1;32m";
    cout << "\t\tDados eletŕonico - No âmbito do módulo" << endl;
    cout << "Programação c/c++ Estruturas básicas e Conceitos Fundamentais" << endl;
    cout << "\t\t\t   ENTA - 2024\n" << endl;
    cout << "\033[0m";
}

void inicio(){
    cout << "\033[1;32m";
    cout << "                 Pressione [ENTER] para Lançar o dado" << endl; 
    cout << "                    Pressione [CTRL + C] para sair/n/n" << endl;  
    cin.ignore();
    cout << "\033[0m";
}

void mostrarDado(int num){
    cout << "\033[1;31m";
    switch (num){
        case 1:
            cout << "\t\t\t\t" << "" << endl;
            cout << "\t\t\t\t" << "  *" << endl;
            cout << "\t\t\t\t" << "" << endl;
            break;
        case 2:
            cout << "\t\t\t\t" << "    *" << endl;
            cout << "\t\t\t\t" << "" << endl;
            cout << "\t\t\t\t" << "*" << endl;
            break;
        case 3:
            cout << "\t\t\t\t" << "    *" << endl;
            cout << "\t\t\t\t" << "  *" << endl;
            cout << "\t\t\t\t" << "*" << endl;
            break;
        case 4:
            cout << "\t\t\t\t" << "*   *" << endl;
            cout << "\t\t\t\t" << "" << endl;
            cout << "\t\t\t\t" << "*   *" << endl;
            break;
        case 5:
            cout << "\t\t\t\t" << "*   *" << endl;
            cout << "\t\t\t\t" << "  *" << endl;
            cout << "\t\t\t\t" << "*   *" << endl;
            break;
        case 6:
            cout << "\t\t\t\t" << "*   *" << endl;
            cout << "\t\t\t\t" << "*   *" << endl;
            cout << "\t\t\t\t" << "*   *" << endl;
            break;
    }
    cout << "\033[0m";

}

void mostraTentativas(int num){
    cout << "\n\n\n\t\t\t    Tentativas: " << num << endl;
}

int main(){
    srand(time(NULL));
    while (true){ 
        system("clear");
        mensagemTopo();
        mostrarDado(rand() % 6 + 1);
        mostraTentativas(++contador);
        inicio();
    }
}