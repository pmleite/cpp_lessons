#include <iostream>
int  xpto=10;
using namespace std;

int soma(int x , int y){
    return x+y;
}

double soma(double x , int y){
    return x+y;
}

double soma(double x , double y){
    return x+y;
}

double megaFuncao(double x, double y, string msg){
    cout << msg << endl;
    return x+y;
}


int main(){

    cout << megaFuncao(10, 20, "Vou somar uns numeros") << endl;
  
return 0;
}