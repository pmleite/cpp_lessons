#include <iostream>

using namespace std;

int opcao;

int main(){

    system("clear");

        cout << "Digite o numero na qual queira ver as informacoes do lutador: " << endl;
        cout << "1 - Mike Tyson " << endl;
        cout << "2 - Canelo Alvarez " << endl;
        cout << "3 - Floyd " << endl;
        cout << "4 - Tank Davis " << endl;
        cout << "Opcao: ";
        cin >> opcao;

    system("clear");

    switch (opcao)
    {
    case 1:
        cout << "Mike Tyson: " << endl;
        cout << "Vitorias: 50 " << endl;
        cout << "Derrotas: 6 " << endl;
        cout << "Empates: 3 " << endl;
        cout << "Peso: 80Kg " << endl;    
    break;

    case 2:
        cout << "Canelo Alvarez: " << endl;
        cout << "Vitorias: 45 " << endl;
        cout << "Derrotas: 1 " << endl;
        cout << "Empates: 0 " << endl;
        cout << "Peso: 75Kg " << endl;    
    break;

    case 3:
        cout << "Floyd: " << endl;
        cout << "Vitorias: 55 " << endl;
        cout << "Derrotas: 0" << endl;
        cout << "Empates: 0 " << endl;
        cout << "Peso: 70Kg " << endl;    
    break;

    case 4:
        cout << "Tank Davis: " << endl;
        cout << "Vitorias: 30 " << endl;
        cout << "Derrotas: 0 " << endl;
        cout << "Empates: 0 " << endl;
        cout << "Peso: 67Kg " << endl;    
    break;
    
    default:
        break;
    }

    return 0;

}