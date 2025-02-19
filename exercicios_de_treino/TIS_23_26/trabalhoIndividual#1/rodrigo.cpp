#include <iostream>

using namespace std;

double carteira = 0, banco = 0, valor;
int opcao;

void deposito(){
    cout << "Quanto dinheiro queres depositar?" << endl;
        cin >> valor;

        if(valor > carteira){
            cout << "Não tens dinheiro suficiente para fazer isso" << endl;
    
        }else{
            cout << "Depositaste o dinheiro na tua conta" << endl;
            banco += valor;
            carteira -= valor;
        }
}

void retirar(){
    cout << "Quanto dinheiro queres retirar? " << endl;
        cin >> valor;

        if(valor > banco){
            cout << "Não podes retirar dinheiro do banco" << endl;
        }else{
            cout << "Retiraste o teu dinheiro do banco" << endl;
            banco += valor;
            carteira -= valor;
        }
}

void verificar(){
    cout << "Conta total:" << endl;
    cout << "Carteira " << carteira << "euros" << endl;
    cout << "Banco " << banco << "euros" << endl;
}


int main(){
    cout << "Quanto dinheiro tens na carteira? " << endl;
    cin >> carteira;

    do{
    cout << "Bem vindo ao simulador" << endl;
    cout << "1 - Depositar" << endl;
    cout << "2 - Retirar" << endl;
    cout << "3 - Verificar" << endl;
    cout << "4 - Sair" << endl;
    cin >> opcao;
   

        switch(opcao){
            case 1:
            deposito();
            break;

            case 2:
            retirar();
            break;

            case 3:
            verificar();
            break;

            case 4:
            cout << "Saindo do simulador..." << endl;
            break;

            default:
            cout << "Não podes fazer isso, tenta outra coisa" << endl;
            break;
        };
    }while(opcao != 4);
}
