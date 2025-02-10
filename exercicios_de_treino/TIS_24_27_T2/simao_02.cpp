#include <iostream>
#include <string>

using namespace std;

int main(){

    string saudavel[5] = {"Aveia","Peixe","Legumes","Fruta","Salada"};
    string nsaudavel[5] = {"Hamburger","Pizza","Gelado","Batata Frita","Gelado"};

    cout << "Comidas Saudaveis:" << endl;
    for(int i = 0; i < 5; i++){
        cout << "\n- " << saudavel[i] << endl;
    } 

    cout << "Comidas Não Saudaveis:" << endl;
    for(int i = 0; i < 5; i++){
        cout << "\n- " << nsaudavel[i] << endl;
    }

    return 0;
}