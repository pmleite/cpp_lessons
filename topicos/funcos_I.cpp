#include <iostream>

using namespace std;

int x = 5;

void avaliaX(){
    if(x == 10){
        cout << "x é igual a 10" << endl;
    }else{
        cout << "x não é igual a 10" << endl;
    }
}

int somaNumeros(){
    int x = 5;
    int b = 5;
    return x+b;
}

int somaDoisNumeros(int x, int y){
    return x+y;
}

void somanumeros(int x, int y){
    cout << x+y << endl;
}

int main(){
    cout << somaDoisNumeros(10,20) << endl;
    return 0;
}