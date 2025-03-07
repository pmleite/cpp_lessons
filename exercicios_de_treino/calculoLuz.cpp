#include <iostream>
#include <cmath>

#define CONSTANTE_PLANK 6.62607015e-34

using namespace std;

float calculoEnergiaFotoes(){
    system("clear");
    cout << "deseja calcular a frequencia ou a energia? (f/e): ";
    char opcao;
    cin >> opcao;
    if(opcao == 'f'){
        float energia;      
        cout << "Energia: ";
        cin >> energia;
        cout << "Frequencia: " << energia/CONSTANTE_PLANK << endl;
    }else if(opcao == 'e'){
        float frequencia;
        cout << "Frequencia: ";
        cin >> frequencia;
        cout << "Energia: " << frequencia*CONSTANTE_PLANK << endl;
    }else{
        cout << "opcao invalida" << endl;
    }
    return 0;
}

float calculoVelocidadeLuz(float f, float lambda){
    return f*lambda;
}

/** 
 * @brief Calculo da fórmula resolvente de uma equação de 2º grau
 *        (-b±√(b²-4ac))/(2a).
 *        Os resultados são impressos no ecrã.
 * 
 *  (-b+sqrt((b*b)-4ac))/(2a)
 *  (-b-sqrt((b*b)-4ac))/(2a)
 * 
 * @param a coeficiente a
 * @param b coeficiente b
 * @param c coeficiente c
 * 
 */
void formulaResolv(float a, float b, float c){
    float x1, x2;
    float delta = (b*b)-(4*a*c);
    if(delta < 0){
        cout << "não existem raízes reais" << endl;
    }else{
        x1 = (-b+sqrt(delta))/(2*a);
        x2 = (-b-sqrt(delta))/(2*a);
        cout << "x1: " << x1 << endl;
        cout << "x2: " << x2 << endl;
    }
}




int main(){

    
    formulaResolv(2,600,5);

    return 0;



}