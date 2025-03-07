#include <iostream>
#include <cmath>

using namespace std;

/**
 * @brief Função para o calculo da reta
 * 
 * @param a coeficiente angular
 * @param b coeficiente linear
 * @param x valor de x
 * @return valor de y *
 *  
 * @note y = ax + b
 * @warning a e b devem ser diferentes de 0
 */
float reta(float a, float b, float x){
    return a*x + b;
}

/**
 * @brief Função para calcular o declive de uma
 *        reta
 * @param x1 coordenada x do ponto 1
 * @param y1 coordenada y do ponto 1
 * @param x2 coordenada x do ponto 2
 * @param y2 coordenada y do ponto 2
 * @return declive da reta
 * 
 * @note m = (y2-y1)/(x2-x1)
 * @warning x1 e x2 devem ser diferentes
 */
float declive(float x1, float y1, float x2, float y2){
    return (y2-y1)/(x2-x1);
}

const float PLANK_CONSTANT = 6.62607015e-34;

/**
 * @brief Função para calcular a energia de um fotão
 *        a partir da sua frequência
 * @param f frequência do fotão
 * @return energia do fotão
 * @note E = hf
 * @warning f deve ser maior que 0
 */
float energia(float f, float cp=PLANK_CONSTANT){
    return cp*f;
}

/**
 * @brief Função para calcular a velocidade de propagação
 *        da luz a partir da sua frequencia e comprimento 
 *        de onda.
 * @param f frequência do fotão
 * @param c comprimento de onda do fotão
 * @return velocidade de propagação da luz
 * @note v = f*cp
 * @warning f e cp devem ser maiores que 0
 */
float velocidade(float f, float c){
    return f*c;
}

/**
 * @brief Fórmula resolvente de equação de 2º grau
 * @param a coeficiente a
 * @param b coeficiente b
 * @param c coeficiente c
 * 
 * @note x = (-b ± √(b² - 4ac)) / 2a
 *      x1 = (-b + sqrt(b*b - 4*a*c)) / 2*a 
 *      x2 = (-b - sqrt(b*b - 4*a*c)) / 2*a
 * 
 * @return x1 e x2
 * @warning a deve ser diferente de 0
 */
string resolvente(float a, float b, float c){
    float x1, x2;
    string result="";

    float delta = b*b - 4*a*c;
    if(delta < 0){
        return "Não existem raízes reais";
    }else{
        x1 = (-b + sqrt(b*b - 4*a*c)) / (2*a);
        x2 = (-b - sqrt(b*b - 4*a*c)) / (2*a);
        result = " Raiz 1: " + to_string(x1) + 
                " Raiz 2: " + to_string(x2);
    }
    return result;
}

/**
 * @brief Função para calcular a aceleração de um corpo
 *        a partir da sua força e massa
 * @param f força do corpo
 * @param m massa do corpo
 * @return aceleração do corpo
 * @note a = f/m
 * @warning m deve ser diferente de 0
 */
float aceleracao(float f, float m){
    return f/m;
}

/**
 * @brief Função para calcular a área de um cone
 *       a partir do seu raio e altura
 * @param r raio do cone
 * @param h altura do cone
 * @return área do cone
 * @note A = πr² + πr√(r² + h²)
 *       a = 3.14*r*r + 3.14*r*sqrt(r*r + h*h)
 * @warning r e h devem ser maiores que 0
 */
float areaCone(float r, float h){
    return 3.14*r*r + 3.14*r*sqrt(r*r + h*h);
}





int main(){
    system("clear");
    cout <<resolvente(1,200,4) << endl;
    return 0;
}