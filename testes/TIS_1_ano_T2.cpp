/*
Parte-se do presuposto que  oprograma está a 
importar a biblioteca <iostream> e a usar o namespace std.

Cada Pergunta tem uma cotação máxima de 1,25 valores.
e pode ser cotada em 0 valores, 0,6 ou 1,25
*/


/** 
 * @note Exercicio 1
 * @brief Subtração de dois números inteiros
 * @param x Minuendo
 * @param y Subtraendo
 * @return Diferença entre os dois números
 */
int subtracao(int x, int y){
    return x - y;
}

/**
 * @note Exercicio 2
 * @brief O resto da divisão de dois números inteiros
 * @param x Dividendo
 * @param y Divisor
 * @return Resto da divisão
 */
int resto(int x, int y){
    return x % y;
}

/**
 * @note Exercicio 3
 * @brief calcula o cubo de um numero inteiro
 * @param x numero inteiro
 * @return cubo do numero
 */
int cubo(int x){
    return x * x * x;
}

/**
 * @note Exercicio 4
 * @brief Soma de todos os elementos de um array
 * @param arr Array de inteiros
 * @param n Número de elementos do array
 * @return Soma de todos os elementos do array
 */
int somaArray(int arr[], int n){
    int soma = 0;
    for(int i = 0; i < n; i++){
        soma += arr[i];
    }
    return soma;
}

/**
 * @note Exercicio 5
 * @brief Verifica se um número é ímpar
 * @param x Número inteiro
 * @return 1 se for ímpar, 0 se for par
 */
int impar(int x){
    return x % 2 != 0;
}

/**
 * @note Exercicio 6
 * @brief Resolve a equação 5/x
 */
float equacao(int x){
    if(x == 0){
        return 0;
    }
    return 5 / x;
}

/**
 * @note Exercicio 7
 * @brief Devolve o segundo elemento de uma palavra
 * @param palavra String
 * @return Segundo elemento da string
 * @note A função não verifica se a string tem pelo menos 2 elementos
 *       presume-se que a string tem pelo menos 2 elementos
 */
char segundoElemento(string palavra){
    return palavra[1];
}

/**
 * @note Exercicio 8
 * @brief Devolve o número de elementos impares de um array de inteiros
 * @param arr Array de inteiros
 * @param n Número de elementos do array
 * @return Número de elementos impares
 */
int impares(int arr[], int n){
    int impares = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] % 2 != 0){
            impares++;
        }
    }
    return impares;
}

/**
 * @note Exercicio 9
 * @brief Resolve a equação 6 * x + 10 / 3
 * @param x Número inteiro
 * @return Resultado da equação
 * @note A equação é resolvida da esquerda para a direita
 *       cuidado com as prioridades segundo as regras da
 *       matemática
 */
float equacao2(int x){
    return (6 * x) + (10 / 3);
}


/**
 * @note Exercicio 10
 * @brief Inverte uma string
 * @param palavra String
 * @return String invertida
 */
string inverteString(string palavra){
    string invertida = "";
    for(int i = palavra.size() - 1; i >= 0; i--){
        invertida += palavra[i];
    }
    return invertida;
}

/**
 * @note Exercicio 11
 * @brief Mostra a tabuada de um numero inteiro
 * @param x Número inteiro
 * @return Tabuada do número
 * @note A tabuada é mostrada no ecrã até ao 10
 */
void tabuada(int x){
    for(int i = 1; i <= 10; i++){
        cout << x << " * " << i << " = " << x * i << endl;
    }
}

/**
 * @note Exercicio 12
 * @brief Calcula a area de uma esfera
 * @param raio Raio da esfera
 * @return Area da esfera
 * @note A área de uma esfera é calculada por 4 * PI * raio^2
 *       onde PI é uma constante com o valor 3.14159
 *       e raio é o raio da esfera 
 */
float areaEsfera(float raio){
    return 4 * 3.14159 * raio * raio;
}

/**
 * @note Exercicio 13
 * @brief Calcula o módulo de um matriz 2 por 2
 * @param a elemento a
 * @param b elemento b
 * @param c elemento c
 * @param d elemento d
 * @return módulo da matriz
 * @note O módulo de uma matriz 2x2 é calculado pela fórmula
 *       a * d - b * c
 */
int moduloMatriz(int a, int b, int c, int d){
    return a * d - b * c;
}


/**
 * @note Exercicio 14
 * @brief Apresenta dois chars por ordem alfabética
 * @param a Primeiro char
 * @param b Segundo char
 * @note A função não verifica se os chars são letras
 *      presume-se que os chars são letras
 */
void ordemAlfabetica(char a, char b){
    if(a < b){
        cout << a << " " << b << endl;
    }else{
        cout << b << " " << a << endl;
    }
}

/**
 * @note Exercicio 15
 * @brief Desenha um retangulo no ecrã com o caracter '*'
 * @param largura Largura do retangulo
 * @param altura Altura do retangulo
 * @note O retangulo é desenhado no ecrã com o caracter '*'
 *       e tem a largura e altura definidas
 */
void desenhaRetangulo(int largura, int altura){
    for(int i = 0; i < altura; i++){
        for(int j = 0; j < largura; j++){
            cout << "*";
        }
        cout << endl;
    }
}

/**
 * @note Exercicio 16
 * @brief Apresenta um menu com 3 opções:
 *        1 - Enviar
 *        2 - Receber
 *        3 - Sair
 *        Cada opcao deve chamar uma função com
 *        o nome respetivo (enviar, receber, sair)        
 * @note O menu é apresentado no ecrã e o utilizador
 *       deve escolher uma opção
 */
void menu(){
    int opcao;
    cout << "1 - Enviar" << endl;
    cout << "2 - Receber" << endl;
    cout << "3 - Sair" << endl;
    cout << "Escolha uma opção: ";
    cin >> opcao;
    switch(opcao){
        case 1:
            cout << "Enviar" << endl;
            break;
        case 2:
            cout << "Receber" << endl;
            break;
        case 3:
            cout << "Sair" << endl;
            break;
        default:
            cout << "Opção inválida" << endl;
    }
}

