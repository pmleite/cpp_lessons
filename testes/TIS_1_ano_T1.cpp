/*
Parte-se do presuposto que  oprograma está a 
importar a biblioteca <iostream> e a usar o namespace std.

Cada Pergunta tem uma cotação máxima de 1,25 valores.
e pode ser cotada em 0 valores, 0,6 ou 1,25
*/


/**
 * @note Exercicio 1
 * @brief soma dois numeros inteiros
 * @param x primeiro numero inteiro
 * @param y segundo numero inteiro
 * @return soma dos dois numeros
 */
int soma(int x, int y){
    return x + y;
}

/**
 * @note Exercicio 2
 * @brief divisão de dois numeros inteiros
 * @param x dividendo
 * @param y divisor
 * @return quociente da divisão
 */
float divisao(int x, int y){
    return x / y;
}

/**
 * @note Exercicio 3
 * @brief calcula o quadrado de um numero inteiro
 * @param x numero inteiro
 * @return quadrado do numero
 */
int quadrado(int x){
    return x * x;
}

/**
 * @note Exercicio 4
 * @brief numero de elementos de um array
 * @param arr array de inteiros
 * @return numero de elementos do array
 */
int tamanho(int arr[]){
    return sizeof(arr) / sizeof(arr[0]);
}

/**
 * @note Exercicio 5
 * @brief verifica se um numero é par
 * @param x numero inteiro
 * @return 1 se for par, 0 se for impar
 */
int par(int x){
    return x % 2 == 0;
}

/**
 * @note Exercicio 6
 * @brief Resolve a equação 1/x
 * @param x número inteiro
 * @return resultado da equação
 */
float equacao(int x){
    if(x ==0){
        return 0;
    }
    return 1 / x;
}

/**
 * @note Exercicio 7
 * @brief Devolve o terceiro elemento de uma palavra
 * @param palavra string
 * @return terceiro elemento da palavra
 * @note A função não verifica se a palavra tem pelo menos 3 caracteres,
 *       presume-se que a palavra tem pelo menos 3 caracteres
 */
char terceiroElemento(string palavra){
    return palavra[2];
}


/**
 * @note Exercicio 8
 * @brief Devolve o número de elementos pares de um array de inteiros
 * @param arr array de inteiros
 * @param n número de elementos do array
 * @return número de elementos pares
 */
int pares(int arr[], int n){
    int pares = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] % 2 == 0){
            pares++;
        }
    }
    return pares;
}

/**
 * @note Exercicio 9
 * @brief Resolve a equação 2 * x + 3 / 4
 * @param x número inteiro
 * @return resultado da equação
 * @note A equação é resolvida da esquerda para a direita
 *       cuidado com as prioridades segundo as regras da
 *       matemática
 */
float equacao2(int x){
    return (2 * x) + (3 / 4);
}

/**
 * @note Exercicio 10
 * @brief Inverte uma string
 * @param palavra string
 * @return string invertida
 */
string inverte(string palavra){
    string invertida = "";
    for(int i = palavra.length() - 1; i >= 0; i--){
        invertida += palavra[i];
    }
    return invertida;
}

/**
 * @note Exercicio 11
 * @brief Mostra a tabuada de um numero inteiro
 * @param x numero inteiro
 * @note A tabuada é mostrada no ecrã até ao 10
 * 
 */
void tabuada(int x){
    for(int i = 1; i <= 10; i++){
        cout << x << " * " << i << " = " << x * i << endl;
    }
}

/**
 * @note Exercicio 12
 * @brief Calcula a área de um trapésio
 * @param b1 base maior
 * @param b2 base menor
 * @param h altura
 * @return área do trapésio
 * @note A área do trapésio é calculada pela fórmula
 *       (b1 + b2) * h / 2
 */
float areaTrapezio(float b1, float b2, float h){
    return (b1 + b2) * h / 2;
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
 * @brief Apresenta dois nomes por ordem alfabética
 * @param nome1 primeiro nome
 * @param nome2 segundo nome
 * @note A função não verifica se os nomes são iguais
 *      presume-se que os nomes são diferentes
 */
void ordemAlfabetica(string nome1, string nome2){
    if(nome1 < nome2){
        cout << nome1 << " " << nome2 << endl;
    }else{
        cout << nome2 << " " << nome1 << endl;
    }
}   

/**
 * @note Exercicio 15
 * @brief Desenha um quadrado no ecrã com o caracter '*'
 * @param n tamanho do quadrado
 * @note O quadrado é desenhado no ecrã com o caracter '*'
 *      e tem o tamanho n
 */
void quadrado(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << "*";
        }
        cout << endl;
    }
}

/**
 * @note Exercicio 16
 * @brief Apresenta um menu com 3 opções:
 *        1 - Abrir
 *        2 - Fechar
 *        3 - Sair
 *        Cada opcao deve chamar uma função com
 *        o nome respetivo (abrir, fechar, sair)        
 * @note O menu é apresentado no ecrã e o utilizador
 *       deve escolher uma opção
 */
void menu(){
    int opcao;
    cout << "1 - Abrir" << endl;
    cout << "2 - Fechar" << endl;
    cout << "3 - Sair" << endl;
    cout << "Escolha uma opção: ";
    cin >> opcao;
    switch(opcao){
        case 1:
            abrir();
            break;
        case 2:
            fechar();
            break;
        case 3:
            sair();
            break;
        default:
            cout << "Opção inválida" << endl;
    }
}
 

