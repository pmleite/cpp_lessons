#include <iostream>
using namespace std;

int main(){

    string comidas[]={"bolo","rissois","sneackers","pizza"},doces = "", salgados = " ";
    for(string comida : comidas){
        char tipo;
        cout << comida << "é doce ou salgado ?";
        cin >> tipo;
        (tipo == 'd' ? doces : salgados)+= comida +" ";
    }
        cout <<"\ndoces: "<< doces <<"\nsalgados: "<< salgados << endl;
return 0;
    
}