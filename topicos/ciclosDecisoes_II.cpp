//Ciclo while e do While
//Quando utilizar um e outro

#include <iostream>
using namespace std;

int numerosAte20[] = {1,2,3,4,5,
                      6,7,8,9,10,
                      11,12,13,14,
                      15,16,17,18,
                      19,20};


int main(){

    //forma canonica de um ciclo for
    for (int i = 0; i < 20; i++){
        cout << "Número " << i << " é " << numerosAte20[i] << endl;
    }

    //forma simplificada de um ciclo for
    for (int x : numerosAte20) cout <<  x << endl;
    



    return 0;
}