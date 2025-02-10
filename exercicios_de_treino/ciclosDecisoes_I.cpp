#include <iostream>

using namespace std;

struct Carro{
    string marca;
    string matricula;
};

Carro carros[] = {
    {"fiat", ""},
    {"mercedes", ""},
    {"dacia", ""},
    {"renault", ""}
};

int main(){

    for( Carro  c : carros){
        cout << c.marca  << endl;

    }

    cout << carros[0].marca << "  " << 
            carros[0].matricula;

}
